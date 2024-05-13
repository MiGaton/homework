/*Считать массив из 10 элементов и посчитать сумму положительных элементов массива.*/

#include <stdio.h>
#define SIZE 10

int Imput();
int sum_PositiveNum();

int main(void)
{
    int arr[SIZE];
    Imput(SIZE,arr);
    printf("%d", sum_PositiveNum(SIZE, arr));
}

int Imput(int n, int arr[])
{
    int j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
    return j;
}

int sum_PositiveNum(int n,int arr[])
{
    int sum=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]>0)
            sum+=arr[j];
    }
    return sum;
}
