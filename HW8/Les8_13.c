/*Считать массив из 10 элементов и отобрать в другой массив все числа, у которых вторая с конца цифра (число десятков) – ноль.*/

#include <stdio.h>
#define SIZE 10


void Imput();
int second_DigitZero();
void Print ();



int main(void)
{
    int arr_DigitZero [SIZE] = {0};
    int SIZE_DigitZero;
    int arr [SIZE] = {0};
    Imput (SIZE, arr);
    SIZE_DigitZero = second_DigitZero (SIZE, arr, arr_DigitZero);
    Print (SIZE_DigitZero, arr_DigitZero);
}


void Print (int n, int arr[])
{
    for(int j=0;j<n;j++)
        printf("%d ", arr[j]);
}

void Imput(int n, int arr[])
{
    int j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
}

int second_DigitZero(int n, int arr[], int arr_zero[])
{
    int i=0;
    for(int j=0;j<n;j++)
    {
        if((arr[j]%100)/10==0)
        {
            arr_zero[i]=arr[j];
            i++;
        }
    }
    return i;
}
