/*Составить функцию, которая переводит число N из десятичной системы счисления в P-ичную систему счисления.*/



#include <stdio.h>
#include <inttypes.h>

int сhanging_Сalcsystem(int n,int p)
{
    int result=0;
    int rem_Div=0;
    int deg=1;
    do
    {
        rem_Div=n%p;
        result=result+rem_Div*deg;
        deg*=10;
        n=(n-n%p)/p;
        if(n<p)
            result=result+n*deg;
        //printf("%d\n", result);
    }while(n/p);
    return result;
}

int main(void)
{
    int n,p;
    scanf("%d %d",&n,&p);
    printf("%d", сhanging_Сalcsystem(n,p));
}
