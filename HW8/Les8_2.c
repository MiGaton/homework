/*Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.*/

#include <stdio.h>


#define SIZE 5

int Imput();
int min_Value();



int main(void)
{
    int arr[SIZE];
    Imput(SIZE,arr);
    printf("%d", min_Value(SIZE,arr));
}


int Imput(int n, int arr[])
{
    int j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
    return j;
}

int min_Value(int n, int arr[])
{
    int min=arr[0];
    for(int j=0;j<n;j++)
    {
        if(min>arr[j])
            min=arr[j];
    }
    return min;
}
