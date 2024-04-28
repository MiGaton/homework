/*Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)
float sinus(float x)*/

#include <stdio.h>
#include <math.h>


float sinus(float x)
{
    int n=20;
    float sum=x;
    long long fact=1;
    int sign=-1;
    for(long long i=3;i<=n;i+=2)
    {
        fact=fact*(i-1)*i;
        sum=sum+sign*pow(x,i)/fact;
        //printf("(%.3f+%d*%lf^%lld)/%lld\n",sum,sign,x,i,fact);
        sign*=-1;

    }

    return sum;

}

int main(void)
{
    int x;
    float x_rad;
    scanf("%d",&x);
    x_rad=x*3.1415926535/180;
    printf("%.3f",sinus(x_rad));
}

