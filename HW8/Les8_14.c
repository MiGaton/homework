/*Считать массив из 10 элементов и выделить в другой массив все числа, которые встречаются более  одного раза. В результирующем массиве эти числа не должны повторяться.*/

#include <stdio.h>
#define SIZE 10


void Imput();
int more_One();
void num_AscendingOrder ();
void Print ();
void swap ();



int main(void)
{
    int arr_moreOne [SIZE]={0};
    int arr[SIZE];
    int SIZE_moreOne;
    Imput(SIZE,arr);
    num_AscendingOrder(SIZE,arr);
    SIZE_moreOne = more_One (SIZE, arr, arr_moreOne);
    Print(SIZE_moreOne, arr_moreOne);

}


void Imput(int n, int arr[])
{
    int j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
}

int more_One(int n, int arr[], int arr_moreOne[])
{
    int j=0;
    int a=0;

    for(j=0;j<n-1;j++)
    {
        for(int i=j+1;i<n;i++)
            if(arr[j]==arr[i]&&(arr[j]!=arr_moreOne[a-1]))
            {
                arr_moreOne[a]=arr[j];
                a++;
                break;
            }
    }
    return a;
}

void num_AscendingOrder (int n,int arr[])
{
    int j=0;
    for(j=0;j<n-1;j++)
        {
            for(int i=j+1;i<n;i++)
            {
                if(arr[j]>arr[i])
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
