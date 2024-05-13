
/*Переставить цифры в числе так, что бы получилось максимальное число.*/
#include <stdio.h>
#define SIZE 10


void Swap ();
void num_ToArr();
void Print ();
void arr_MaxNum();

int main(void)
{
    int arr[SIZE]={0};
    int SIZE_num=0;
    int num =0;
    scanf("%d", &num);
    num_ToArr(&SIZE_num, arr, num);
    arr_MaxNum(SIZE_num, arr);
    Print (SIZE_num, arr);
}

void Swap (int *first,int *second)
{
    int a=*first;
    *first=*second;
    *second=a;
}

void num_ToArr(int *SIZE_num, int *arr, int num)
{

    while(num>0)
    {
        arr[*SIZE_num]=num%10;
        num/=10;
        *SIZE_num+=1;
    }
}

void arr_MaxNum (int n, int *arr)
{
    for(int j=0;j<n;j++)
    {
        int tmp=j;
        for(int i=tmp+1;i<n;i++)
        {
            if(arr[tmp]<arr[i])
                Swap((arr+tmp),(arr+i));
        }
    }
}


void Print (int n, int arr[])
{
    for(int j=0;j<n;j++)
        printf("%d ", arr[j]);
}
