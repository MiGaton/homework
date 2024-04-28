/*Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... (x в радианах)*/

#include <stdio.h>
#include <math.h>


float cosinus(float x)
{
    int n=20;
    long long fact=2;
    int sign=-1;
    float sum=1-(pow(x,2)/fact);
    for(long long i=4;i<=n;i+=2)
    {
        fact=fact*(i-1)*i;
        //float sum1=sum;
        sum=sum-sign*pow(x,i)/fact;
        //printf("%.4f-(%lf^%lld)/%lld=%.3f\n",sum1,x,i,fact,sum);
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
    printf("%.3f",cosinus(x_rad));
}

