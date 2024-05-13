/*Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего. Гарантируется, что такое число ровно 1.*/

#include <stdio.h>
#define SIZE 10


void Imput();
void most_Оften();




int main(void)
{
    int arr[SIZE]={0};
    Imput(SIZE, arr);
    most_Оften(SIZE,arr);
}


void Imput(int n, int arr[])
{
    int j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
}

void most_Оften(int n, int *arr)
{
    int tmp=0;
    int count=0;
    int count_arr[SIZE]={0};
    int position_max=0;

    for(int j=0; j<n-1; j++)
    {
        count=0;
        tmp=j;
        for(int i=j+1;i<n;i++)
            {
                if (*(arr+tmp)==*(arr+i))
                    count++;
            }
        count_arr[j]=count;
    }

    tmp=count_arr[0];
    for(int x=1; x<n; x++)
    {
        if(tmp<count_arr[x])
        {
            tmp=count_arr[x];
            position_max=x;
        }
    }
    printf("%d", arr[position_max]);
}
