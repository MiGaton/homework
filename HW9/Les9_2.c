/*Написать только одну функцию, которая ставит в начало массива все четные элементы, а в конец – все нечетные.
Не нарушайте порядок следования чисел между собой. Строго согласно прототипу:.*/

/*#include <stdio.h>
#define SIZE 10

void sort_even_odd(int n, int a[]);
void Print (int n, int arr[]);
int Input (int n,int *arr);

int main (void)
{
    int arr[SIZE]={0};
    Input (SIZE,arr);
    sort_even_odd(SIZE, arr);
    Print (SIZE, arr);

}*/

void sort_even_odd(int n, int a[])
{
    int mem=0;
    int tmp;
    int j=0;
    
    for(j=0;j<n-1;j++)
    {

        if((a[j]%2)!=0)//наши не четное 
        {
            for(int l=j+1;l<n;l++)//остались ли четные
            {
                if((a[l]%2)==0&&j!=l-1)
                {
					mem=a[l];
					for(int i=0; i<l-j; i++)
					{
						a[l-i]=a[l-1-i];
					}
					a[j]=mem;
					
					break;
				}
				if((a[l]%2)==0&&j==l-1)
				{
					tmp=a[j];
					a[j]=a[l];
					a[l]=tmp;
					break; 
				}
            }
        }
    }
}
/*
void Print (int n, int arr[])
{
    for(int j=0;j<n;j++)
        printf("%d ", arr[j]);
}

int Input (int n,int *arr)
{
    int j;
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    return j;
}
*/
