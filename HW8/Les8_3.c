/*Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их номера.*/

#include <stdio.h>


#define SIZE 10

int Imput();
void min_Num();
void max_Num();
void Print_ar();

int main(void)
{
    int arr[SIZE];
    Imput(SIZE,arr);
    max_Num(SIZE ,arr);
    min_Num(SIZE ,arr);
}

int Imput(int n, int arr[])
{
    int j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
    return j;

}

void min_Num(int n ,int arr[])
{
    int min=arr[0];
    int nmin=1;
    for(int j=1;j<n;j++)
    {
        if(min>arr[j])
        {
            min=arr[j];
            nmin=j+1;
        }
    }
    printf("%d %d ", nmin, min);

}

void max_Num(int n ,int arr[])
{
    int max=arr[0];
    int nmax=1;
    for(int j=0;j<n;j++)
    {
        if(max<arr[j])
        {
            max=arr[j];
            nmax=j+1;
        }
    }
    printf("%d %d ", nmax, max);
}

void Print_ar(int n, int *arr)
{
    for(int j=0; j<n; j++)
        printf("%d", arr[j]);
}
