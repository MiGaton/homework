#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>
#include <string.h>
#include <unistd.h>
#include <curses.h>
#define MIN_Y  1
#define MIN_X  1

enum {LEFT=1, UP, RIGHT, DOWN, STOP_GAME=KEY_F(10)};
enum {MAX_TAIL_SIZE=100, START_TAIL_SIZE=5, MAX_FOOD_SIZE=20, FOOD_EXPIRE_SECONDS=10, SIZE_CONTROL=3,START_SPEED=100};

typedef struct snake_food
{
    int x;
    int y;
    int N;//количество сьеденной еды
    int N_max;
    time_t food_time;
}snake_food;

// Здесь храним коды управления змейкой
typedef struct control_buttons
{
    int down;
    int up;
    int left;
    int right;
}control_buttons;


/*
 Голова змейки содержит в себе
 x,y - координаты текущей позиции
 direction - направление движения
 tsize - размер хвоста
 *tail -  ссылка на хвост
 */
typedef struct snake_t
{
    int x;
    int y;
    int x_max;
    int y_max;
    int direction;
    int direction_old;
    size_t tsize;
    struct tail_t *tail;
    struct snake_food food;
    struct control_buttons *controls;

} snake_t;

/*
 Хвост это массив состоящий из координат x,y
 */
typedef struct tail_t
{
    int x;
    int y;
} tail_t;





void initFood(struct snake_t *head)
{
    struct snake_food init_ft={rand()%head->x_max,rand()%head->y_max, 0, 0, time(NULL)};
    head->food=init_ft;
}

void initButton (struct snake_t *head)
{
    control_buttons* bt = (control_buttons*) malloc(SIZE_CONTROL*sizeof(control_buttons));
    control_buttons init_bt[] ={{KEY_DOWN, KEY_UP, KEY_LEFT, KEY_RIGHT},{'S', 'W', 'A', 'D'},{'s', 'w', 'a', 'd'}};
    int CONTROL=sizeof(init_bt)/sizeof(init_bt[0]);
    for(int i=0;i<CONTROL;i++)
        bt[i]=init_bt[i];
    head->controls=bt;
}


void initTail(struct tail_t t[], size_t size)
{
    struct tail_t init_t={0,0};
    for(size_t i=0; i<size; i++)
    {
        t[i]=init_t;
    }
}
void initWindow(struct snake_t *window)
{
    getmaxyx(stdscr, window->y_max, window->x_max);
}

void clenWindow(struct snake_t *window)
{

    for(int x=1; x<=window->x_max; x++)
        for(int y=0; y<=window->y_max; y++)
            mvprintw(y, x," ");
    mvprintw(0, 1,"Use arrows for control. Press 'F10' for EXIT");
}

void printInfo(snake_t *head)
{
    for(int i=0;i<=head->x_max; i++)
        mvprintw(head->y_max-2,i," "), mvprintw(head->y_max-1,i," ");

    mvprintw(head->y_max-2,0,"x_h=%d y_h=%d",head->x, head->y);
    mvprintw(head->y_max-1,0,"x_f=%d y_f=%d",head->food.x, head->food.y);
    mvprintw(head->y_max-2,15,"N=%d",head->food.N);
    mvprintw(head->y_max-1,15,"N_max=%d",head->food.N_max);
    mvprintw(head->y_max-1,25,"T=%2dsec",time(NULL)-head->food.food_time);
    mvprintw(head->y_max-2,25,"Speed=%d",(head->food.N*5));
}

void initHead(snake_t *head, int x, int y)
{
    head->x = x;
    head->y = y;
    head->direction = RIGHT;
    head->direction_old=RIGHT;
}

void initSnake(snake_t *head, size_t size, int x, int y)
{
tail_t*  tail  = (tail_t*) malloc(MAX_TAIL_SIZE*sizeof(tail_t));

    initTail(tail, MAX_TAIL_SIZE);
    initHead(head, x, y);
    head->tail = tail; // прикрепляем к голове хвост
    head->tsize = size+1;
    mvprintw(head->tail[head->tsize-1].y, head->tail[head->tsize-1].x, " ");
}

/*
 Движение головы с учетом текущего направления движения
 */
void go(struct snake_t *head)
{
    char ch = '&';
    //ограниячение реверса движения
    if(head->direction==DOWN && head->direction_old==UP)
        head->direction=UP;
    if(head->direction==UP && head->direction_old==DOWN)
        head->direction=DOWN;
    if(head->direction==LEFT && head->direction_old==RIGHT)
        head->direction=RIGHT;
    if(head->direction==RIGHT && head->direction_old==LEFT)
        head->direction=LEFT;

    mvprintw(head->y, head->x," "); // очищаем один символ

     
    switch (head->direction)
    {
        case LEFT:
            if(head->x <= 0) // Циклическое движение, чтобы не
                head->x = head->x_max;
            mvprintw(head->y, --(head->x), "%c", ch);
        break;
        case RIGHT:
            if(head->x >= head->x_max-1)
                head->x=0;
            mvprintw(head->y, ++(head->x), "%c", ch);
        break;
        case UP:
            if(head->y <= 1)
                head->y=head->y_max-2;
            mvprintw(--(head->y), head->x, "%c", ch);
        break;
        case DOWN:
            if(head->y >= head->y_max-3)
                head->y=0;
            mvprintw(++(head->y), head->x, "%c", ch);

        break;
        default:
        break;
    }
    head->direction_old=head->direction;
    //refresh(); 
}

void changeDirection(struct snake_t* snake, const int32_t key)
{
    for(int i=0; i<SIZE_CONTROL;i++)
    {
        if (key == snake->controls[i].down)
            snake->direction = DOWN;
        else if (key == snake->controls[i].up)
            snake->direction = UP;
        else if (key == snake->controls[i].right)
            snake->direction = RIGHT;
        else if (key == snake->controls[i].left)
            snake->direction = LEFT;
    }
}
/*
 Движение хвоста с учетом движения головы
 */
void goTail(struct snake_t* head)
{
    char ch = '*';
    mvprintw(head->tail[head->tsize-1].y, head->tail[head->tsize-1].x, " ");
    
    for(size_t i = head->tsize-1; i>0; i--)
    {
        head->tail[i] = head->tail[i-1];
        if( head->tail[i].y || head->tail[i].x)
            mvprintw(head->tail[i].y, head->tail[i].x, "%c", ch);
        if(head->x==head->tail[i].x&&head->y==head->tail[i].y)
        {
            
            initSnake(head,START_TAIL_SIZE,10,10);
            head->direction=RIGHT;
            if((head->food.N)>(head->food.N_max))
                head->food.N_max=head->food.N;
            head->food.N=0;
            clenWindow(head);
        }


    }
    head->tail[0].x = head->x;
    head->tail[0].y = head->y;
    refresh(); 
   
}

void food(struct snake_t* head)
{
    
    char ch='#';
    mvprintw(head->food.y, head->food.x,"%c",ch);
    if(head->y==head->food.y && head->x==head->food.x)
    {
        head->food.x=(rand()%(head->x_max-2))+1;
        head->food.y=rand()%head->y_max-2;
        head->food.food_time=time(NULL);
        (head->food.N)++;
        (head->tsize)++;
    }
    else if(time(NULL)-head->food.food_time>FOOD_EXPIRE_SECONDS)
    {
        mvprintw(head->food.y, head->food.x," ");
        head->food.x=rand()%head->x_max;
        head->food.y=rand()%head->y_max;
        head->food.food_time=time(NULL);
    }
        
}

int levelSnake(struct snake_t* head)
{
    if(head->food.N<3)
        return 100;
    else if(head->food.N<6)
        return 50;
    else if(head->food.N<9)
        return 10;
    else if(head->food.N<12)
        return 5;

}
void delay (struct snake_t* head)
{
    long cloc_takt=clock();
    while (clock()<cloc_takt+100-head->food.N*4)
    {;}
}

int main()
{
    snake_t* snake = (snake_t*)malloc(sizeof(snake_t));
    initSnake(snake,START_TAIL_SIZE,10,10); 
    initButton(snake);
    initscr();
    initWindow(snake);
    initFood(snake);
    mvprintw(0, 1,"Use arrows for control. Press 'F10' for EXIT");
    keypad(stdscr, TRUE); // Включаем F1, F2, стрелки и т.д.
    raw();                // Откдючаем line buffering
    noecho();            // Отключаем echo() режим при вызове getch
    curs_set(FALSE);    //Отключаем курсор
    
    timeout(0);    //Отключаем таймаут после нажатия клавиши в цикле
    int key_pressed=0;

    while( key_pressed != STOP_GAME )
    {
        key_pressed = getch(); // Считываем клавишу
        go(snake);
        goTail(snake);
        delay(snake);
        changeDirection(snake, key_pressed);
        food(snake);
        printInfo(snake); 
    }
    free(snake->tail);
    //free(snake->food);
    free(snake);
    free(snake->controls);
    endwin(); // Завершаем режим curses mod
    return 0;
}