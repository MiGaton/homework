
//Составить программу для вычисления НОД с помощью алгоритма Евклида.
// Даны два натуральных числа. Найти наибольший общий делитель.

#include <inttypes.h>
#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d%d", &a,&b);
    while(a > 0 && b > 0)
    {
        if(a>b)
            {
                a=a%b;
            }
        else
            {
                b=b%a;
            }
    }


    printf("%d\n",a?a:b);
    return 0;
}

