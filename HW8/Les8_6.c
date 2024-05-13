/*Считать массив из 12 элементов и посчитать среднее арифметическое элементов массива.*/
#include <stdio.h>
#define SIZE 12



int Imput();
float average_Value ();


int main(void)
{
    int arr[SIZE];
    Imput(SIZE,arr);
    printf("%.2f", average_Value(SIZE,arr));

}
int Imput(int n, int arr[])
{
    int j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
    return j;

}

float average_Value (int n, int arr[])
{
    int i=0;
    float ifl;

    for(int j=0;j<n;j++)
        i+=arr[j];
    return ifl=(float)i/n;
}
