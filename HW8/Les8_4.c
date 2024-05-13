/*Считать массив из 10 элементов и найти в нем два максимальных элемента и напечатать их сумму.*/

#include <stdio.h>
#define SIZE 10

int Imput();
void max_Sum();


int main(void)
{
    int arr[SIZE];
    Imput(SIZE,arr);
    max_Sum(SIZE ,arr);
}

int Imput(int n, int arr[])
{
    int j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
    return j;

}

void max_Sum(int n ,int arr[])
{
    int max_1=arr[0];
    int max_2=arr[1];
    int j=0;

    for(j=1;j<n;j++)
    {
        if(max_1<arr[j])
        {
            max_2=max_1;
            max_1=arr[j];
        }
        else if (max_2 < arr[j])//если arr[0] max
            max_2 = arr[j];
    }
    printf("%d", max_1+max_2);
}
