/*Составить функцию, которая определяет наибольший общий делитель двух натуральных и привести пример ее использования.
int nod(int a, int b)*/



#include <stdio.h>
#include <inttypes.h>

int nod(int a, int b)
{
    int num_1;

    while(a%b!=0&&b%a!=0)
    {
        if(a>b)
        {
            num_1=a%b;
            a=b;
            b=num_1;
        }
        else
        {
            num_1=b%a;
            b=a;
            a=num_1;
        }
    }
    return num_1;

}

int main(void)
{
    int n_1,n_2;
    scanf("%d%d",&n_1,&n_2);
    printf("%d",nod(n_1,n_2));
}
