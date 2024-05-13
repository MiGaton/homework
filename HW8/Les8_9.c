
/*Считать массив из 10 элементов и выполнить циклический сдвиг ВПРАВО на 1.*/
#include <stdio.h>
#define SIZE 10

void Imput();
void shift_Right();
void Print ();



int main(void)
{
    int arr[SIZE];
    Imput(SIZE,arr);
    shift_Right(SIZE,arr);
    Print(SIZE,arr);
}


void Imput(int n, int arr[])
{
    int j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
}

void shift_Right(int n, int arr[])
{
    int j=0;
    int first=arr[n-1];
    for(j=0;j<n;j++)
        arr[n-1-j]=arr[n-2-j];
    arr[0]=first;
}


void Print (int n, int arr[])
{
    for(int j=0;j<n;j++)
        printf("%d ", arr[j]);
}
