/*Составить функцию, которая преобразует текущий символ цифры в число. Написать программу считающую сумму цифр в тексте.
int digit_to_num(char c)*/

#include <stdio.h>
#include <math.h>

int digit_to_num(char c)
{
    if(c>='0'&&c<='9')
        return c-'0';
    return 0;
}

int main (void)
{
    char c;
    int n=0;
    while((c=getchar())!='.')
    {
        n+=digit_to_num(c);
    }
    printf("%d",n);
}


