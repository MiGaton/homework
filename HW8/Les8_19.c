/*Вывести в порядке следования цифры, входящие в десятичную запись натурального числа N.*/

#include <stdio.h>
#define SIZE 10



int num_ToArr();
void Print ();


int main(void)
{
    int arr[SIZE]={0};
    int SIZE_Arr=0;

    SIZE_Arr = num_ToArr(SIZE, arr);
    Print (SIZE_Arr, arr);
}


int num_ToArr(int n, int *arr)
{
    int a=0, b=0;
    int size_num=0;
    scanf("%d",&a);
    b=a;
    while(b>0)
    {
        b/=10;
        size_num++;
    }
    for(int j=0;j<size_num;j++)
    {
        arr[size_num-1-j]=a%10;
        a/=10;
    }
    return size_num;
}

void Print (int n, int arr[])
{
    for(int j=0;j<n;j++)
        printf("%d ", arr[j]);
}
