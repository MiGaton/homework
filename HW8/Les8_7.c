/*Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой и 2-ой половин массива. Необходимо изменить считанный массив и напечатать его одним циклом.*/

#include <stdio.h>
#define SIZE 10

int Imput();
void Inversion();


int main(void)
{
    int arr[SIZE];
    Imput(SIZE,arr);
    Inversion(SIZE,arr);

}

int Imput(int n, int arr[])
{
    int j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
    return j;
}

void Inversion(int n, int arr[])
{
    for(int i=0;i<n/2;i++)
        printf("%d ",arr[n/2-1-i]);
    for(int j=n/2;j<n;j++)
        printf("%d ",arr[n-1-(j-n/2)]);
}
