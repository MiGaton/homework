/*Составить функцию вычисления N!. Использовать ее при вычислении факториала*/



#include <stdio.h>
#include <inttypes.h>

int factorial(int n)
{
    int result=0;
    if(n)
        result=1;
    for(int j=1;j<=n;j++)
        result*=j;
    return result;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d", factorial(n));
}
