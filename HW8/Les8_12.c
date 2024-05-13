//Считать массив из 10 элементов и отсортировать первую половину по возрастанию, а вторую – по убыванию.
#include <stdio.h>
#define SIZE 10

void Imput();
void ascending_Order();
void descending_Order();
void Print();
void swap();



int main(void)
{
    int arr[SIZE];
    Imput(SIZE,arr);
    ascending_Order(SIZE/2,arr);
    descending_Order(SIZE/2,arr+SIZE/2);
    Print(SIZE,arr);
}


void Imput(int n, int arr[])
{
    int j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
}

void ascending_Order(int n, int arr[])
{
    int j;
    for(j=0;j<n-1;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            if (arr[j]>arr[i])
                swap(arr+j,arr+i);
        }
    }

}

void descending_Order(int n, int arr[])
{
    int j=0;
    for(j=0;j<n-1;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            if (arr[j]<arr[i])
                swap(arr+j,arr+i);
        }
    }
}


void Print (int n, int arr[])
{
    for(int j=0;j<n;j++)
        printf("%d ", arr[j]);
}


void swap (int* a, int* b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
