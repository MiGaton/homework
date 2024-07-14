#include "temp_api.h"


float Average_TempMonth (ListSensor* top,int month)
{ 
    int N=0,sum=0;
    while(top)
    {
        if((top->month)==month)
        {   
            sum+=top->t;
            N++;
        }
        top = Read_ListSensor (top);
    }
    return (float)sum/N;
}

int Min_TempMonth(ListSensor* top, unsigned int month)
{
    int min_t=temp_max;
    while(top)
    {
        if((top->month)==month)
            if((top->t) < min_t)
                min_t=top->t;
        top = Read_ListSensor (top);
    }
    return min_t;   
}

int Max_TempMonth (ListSensor* top ,int month)
{
    int max_t=temp_min;
    while(top)
    {
        if((top->month)==month)
            if((top->t) > max_t)
                max_t=top->t;
        top = Read_ListSensor (top);
    }
    return max_t;   
}


float Average_TempYear(ListSensor* top ,unsigned int year)
{
    int N=0,sum=0;
    while(top)
    {
        if((top->year)==year)
        {   
            sum+=top->t;
            N++;
        }
        top = Read_ListSensor (top);
    }
    return (float)sum/N;
}


int Min_TempYear(ListSensor* top,unsigned int year)
{
    int min_t=temp_max;
    while(top)
    {
        if((top->year)==year)
            if((top->t) < min_t)
                min_t=top->t;
        top = Read_ListSensor (top);
    }
    return min_t; 
}

int Max_TempYear(ListSensor* top, unsigned int year)
{
    int max_t=temp_min;
    while(top)
    {
        if((top->year)==year)
            if((top->t) > max_t)
                max_t=top->t;
        top = Read_ListSensor (top);
    }
    return max_t; 
}


ListSensor* Load_DataListSensor (ListSensor* top, char file_name[] )
{
    unsigned int cnt=0, i=0, sign=0, num=1;
    char ch;
    int arr_buf[SIZE_BUF]={0};

    printf("\n");
    printf("=============================================\n");
    FILE *f= fopen(file_name, "r");
    if(f==NULL)
    {
        printf("Error: could not open file!\n");
        printf("---------------------------------------------\n");
        printf("\n");
        return NULL;
    }
    else
    {
        printf("The file is open\n");
        printf("---------------------------------------------\n");
        printf("\n");

        do
        {
            ch=fgetc(f);

            if(ch>='0' && ch<='9')
                arr_buf[cnt]=arr_buf[cnt]*10+ch-'0'; 

            else if(ch=='-'&&cnt==SIZE_BUF-1)
                sign=1;

            else if(ch==';')
            {
                cnt++;
                if(cnt>SIZE_BUF-1)
                    cnt = 0;
            }
            else if(ch=='\n'||ch==EOF)
            { 
                if(sign)
                {
                    arr_buf[SIZE_BUF-1]=0-arr_buf[SIZE_BUF-1];
                    sign=0;
                }
                if(!(TestArr(arr_buf,num))&&cnt==(SIZE_BUF-1))
                    top=Add_ListSensor (top, arr_buf);//запись в структуру
                ArrClean(arr_buf);
                cnt=0;
                num++;
            } 
            else if(ch!=' ')
            {
                arr_buf[cnt]=0xFFF;
                //cnt=0;   
            }

            
        } while (ch!=EOF);
        fclose(f);
        return top;
    }
}
ListSensor* Add_ListSensor (ListSensor* top, int arr_buf[])
{
    ListSensor* ptr=malloc(sizeof(ListSensor));
    uint8_t i=0;
    ptr->year=arr_buf[i++];
    ptr->month=arr_buf[i++];
    ptr->day=arr_buf[i++];
    ptr->hour=arr_buf[i++];
    ptr->min=arr_buf[i++];
    ptr->t=arr_buf[i];
    ptr->next=top;
    return ptr;
}

ListSensor* Read_ListSensor ( ListSensor* top)
{
    ListSensor* current=top;
    //printf("%d  %d  %d  %d  %d  %d\n", current->year, current->month, current->day, current->hour, current->min, current->t);
    current=current->next;
    return current;
    
}
void Free_ListSensor (ListSensor* top)
{
    ListSensor* ptr;
    while (top)
    {
        ptr=top->next;
        free(top);
        top=ptr;
    }
}


void ArrClean(int *arr_buf)
{
    for(int i=0;i<SIZE_BUF;i++)
        arr_buf[i]=0;
}

int TestArr (int* arr_buf, int N)
{     
    for(int i=0; i<SIZE_BUF; i++)
    {
        switch (i)
        {
        case year:
            if((arr_buf[i]<year_min) || (arr_buf[i]>year_max))
            {   
                printf("N=%d ERROR YEAR=%d\n", N, arr_buf[i]);
                return 1;
            }
            break;
        case month:
            if((arr_buf[i]<month_min) || (arr_buf[i]>month_max))
            {   
                 printf("N=%d ERROR MONTH=%d\n", N, arr_buf[i]);
                return 1;
            }
            break;
        case day:
            if((arr_buf[i]<day_min) || (arr_buf[i]>day_max))
            {   
                printf("N=%d ERROR DAY=%d\n", N,arr_buf[i]);
                return 1;
            }
            break;
        case hour:
            if((arr_buf[i]<hour_min) || (arr_buf[i]>hour_max))
            {   
                printf("N=%d ERROR HOUR=%d\n", N,arr_buf[i]);
                return 1;
            }
            break;
        case min:
            if((arr_buf[i]<min_min) || (arr_buf[i]>min_max))
            {   
                printf("N=%d ERROR MIN=%d\n", N,arr_buf[i]);
                return 1;
            }
            break;
        case temp:
            if((arr_buf[i]<temp_min) || (arr_buf[i]>temp_max))
            {   
                printf("N=%d ERROR TEMP=%d\n", N,arr_buf[i]);
                return 1;
            }
            break;
        }
    }
    return 0;
}
void Print_AllStatistic(ListSensor* top)
{
    printf("\n");
    printf("=============================================\n");
    printf("#   Year   Month   Average   Min   Max\n");
    printf("---------------------------------------------\n");
    for(int i=1;i<=N_MONTH;i++)
    {
        printf("%2.2d %5.4d %5.2d %9.2f %6.2d %6.2d \n", 
            i, 
            YEAR,
            i, 
            Average_TempMonth(top,i),
            Min_TempMonth(top, i), 
            Max_TempMonth (top ,i));
    }
    printf("\n");
    printf("=============================================\n");
    printf("Year statistik\n");
    printf("---------------------------------------------\n");
    printf("#   Year   Average   Min   Max\n");
    for(int i=1;i<=N_YEAR;i++)
    {
        printf("%2.2d %5.4d %7.2f %6.2d %6.2d \n", 
            i, 
            YEAR,
            Average_TempYear(top,YEAR+i-1),
            Min_TempYear(top, YEAR+i-1), 
            Max_TempYear (top ,YEAR+i-1));
    }
    printf("=============================================\n");
    printf(" \n");
}

void Print_StatisticMonth(ListSensor* top, int month)
{
    printf("\n");
    printf("=============================================\n");
    printf("#   Year   Month   Average   Min   Max\n");
    printf("---------------------------------------------\n");
    printf("%2.2d %5.4d %5.2d %9.2f %6.2d %6.2d \n", 
        00, 
        YEAR,
        month, 
        Average_TempMonth(top,month),
        Min_TempMonth(top, month), 
        Max_TempMonth (top ,month));
    printf("\n");
}