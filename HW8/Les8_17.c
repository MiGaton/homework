/*Дан массив из 10 элементов. В массиве найти элементы, которые в нем встречаются только один раз, и вывести их на экран.*/

#include <stdio.h>
#define SIZE 10


void Input ();
int only_One();
void Print ();


int main(void)
{
    int arr[SIZE]={0};
    int arr_onlyOne[SIZE]={0};
    int SIZE_onlyOne=0;
    Input (SIZE,arr);
    SIZE_onlyOne = only_One(SIZE, arr, arr_onlyOne);
    Print (SIZE_onlyOne, arr_onlyOne);
}

void Input (int n,int *arr)
{
    int j;
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
}

int only_One(int n, int *arr, int *arr_onlyOne)
{
    int tmp;
    int bit=0;
    int index_arr=0;
    for(int j=0; j<n; j++)
    {
        tmp=j;
        for(int i=0; i<n; i++)
        {
            if (arr[tmp]==arr[i]&&tmp!=i)
            {
                arr_onlyOne[index_arr]=arr[j];
                //printf("%d\n",arr[j]);
                bit=1;
            }
        }
        if(!bit)
        {
            arr_onlyOne[index_arr]=arr[j];
            index_arr++;
        }
        bit=0;
    }
    return index_arr;
}

void Print (int n, int arr[])
{
    for(int j=0;j<n;j++)
        printf("%d ", arr[j]);
}
