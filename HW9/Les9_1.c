/*Производит сортировку переданного ей массива по возрастанию.
#include <stdio.h>
#define SIZE 10


void sort_array();
void Input();
void Print ();



int main(void)
{
    int arr[]={0};
    Input(SIZE, arr);
    sort_array(SIZE,arr);
    Print (SIZE, arr);

}*/

 void sort_array(int size, int a[])
 {
    int tmp=0;
    for(int j=0;j<size-1;j++)
    {
        for(int i=j+1;i<size;i++)
            {
                if(a[j]>a[i])
                {
                    tmp=a[j];
                    a[j]=a[i];
                    a[i]=tmp;
                }
            }
    }
 }

/* void Input(int n, int *arr)
 {
    for(int i=0;i<n;i++)
    {
        scanf("%d", arr+i);
    }
 }

 void Print (int n, int arr[])
{
    for(int j=0;j<n;j++)
        printf("%d ", arr[j]);
}*/
