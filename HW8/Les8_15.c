/*Считать 10 чисел в диапазоне от -500 до 500 и разложить по двум массивам:
в одни помещать только положительные, во второй - только отрицательные.
 Числа, равные нулю, игнорировать. Вывести на экран все элементы обоих массивов.
*/


#include <stdio.h>
#define SIZE 10


void Imput();
int positive_Num();
int negativ_Num();
void Print ();



int main(void)
{
    int arr[SIZE];
    int arr_pos[SIZE]={0};
    int arr_neg[SIZE]={0};
    int SIZE_pos,SIZE_neg;
    Imput(SIZE, arr);
    SIZE_pos = positive_Num (SIZE, arr,arr_pos);
    Print(SIZE_pos, arr_pos);
    SIZE_neg = negativ_Num(SIZE, arr,arr_neg);
    Print(SIZE_neg, arr_neg);
}


void Imput(int n, int arr[])
{
    int j;
    for(j=0;j<n;j++)
        scanf("%d",&arr[j]);
}

int positive_Num(int n, int arr[], int arr_pos[])
{
    int a=0;
    for (int j=0;j<n;j++)
    {
        if (arr[j]>0)
        {
            arr_pos[a]=arr[j];
            a++;
        }
    }
    return a;
}

int negativ_Num(int n,int arr[], int arr_neg[])
{
    int a=0;
    for (int j=0;j<n;j++)
    {
        if (arr[j]<0)
        {
            arr_neg[a]=arr[j];
            a++;
        }
    }
    return a;
}

void Print (int n, int arr[])
{
    for(int j=0;j<n;j++)
        printf("%d ", arr[j]);
}
