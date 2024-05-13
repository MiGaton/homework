/*Считать массив из 10 элементов и отсортировать его по последней цифре.*/

#include <stdio.h>
#define SIZE 10

void Imput();
void inc_LastNum();
void Print ();
void swap();

int main(void)
{
    int arr[SIZE];
    Imput(SIZE,arr);
    inc_LastNum(SIZE,arr);
    Print(SIZE,arr);
}


void Imput(int n, int arr[])
{
    int j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
}

void inc_LastNum(int n, int arr[])
{
    int first;
    for(int j=0;j<n-1;j++)
    {
        first=j;
        for(int i=j+1;i<n;i++)
        {
            if(arr[first]%10>arr[i]%10)
                swap(arr+first, arr+i);
        }
    }
}


void Print (int n, int arr[])
{
    for(int j=0;j<n;j++)
        printf("%d ", arr[j]);
}


void swap(int* a, int* b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
