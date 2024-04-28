/*Составить логическую функцию, которая определяет,
 *что текущий символ это цифра. Написать программу считающую количество цифр в тексте.
 *int is_digit(char c))*/

#include <stdio.h>
#include <math.h>

int is_digit(char c)
{
    if(c>='0'&&c<='9')
        return 1;
    return 0;
}

int main (void)
{
    char c;
    int n=0;
    while((c=getchar())!='.')
    {
        if(is_digit(c))
            n++;
    }
    printf("%d",n);

}


