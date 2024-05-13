
/*Считать массив из 12 элементов и выполнить инверсию для каждой трети массива.*/
#include <stdio.h>


#define SIZE 12

int Imput();
void Inversion ();
void Print_ar();
void swap ();

int main(void)
{
    int arr[SIZE]={0};

    Imput(SIZE,arr);
    for(int i=0;i<3;i++)
        Inversion(SIZE/3,arr+i*SIZE/3);
    Print_ar(SIZE,arr);
}


int Imput(int n, int arr[])
{
    int j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
    return j;

}

void Inversion (int n, int* arr)
{
    int j=0;
    //int tmp=arr[0];
    for(j=0; j<n/2; j++)
        swap((arr+j), (arr+n-1-j));
}


void Print_ar(int n, int *arr)
{
    for(int j=0; j<n; j++)
        printf("%d ", arr[j]);
}

void swap (int* a, int* b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

/*void Inversion(int n, int arr[])
{
    int a=n/3;//
    for(int i=a-1;i>=0;i--)
        printf("%d ",arr[i]);
    for(int i=a*2-1;i>=a;i--)
        printf("%d ",arr[i]);
    for(int i=n-1;i>=a*2;i--)
        printf("%d ",arr[i]);
}*/
