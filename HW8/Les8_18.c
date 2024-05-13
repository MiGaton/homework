/*В диапазоне натуральных чисел от 2 до N определить, сколько из них кратны любому из чисел в диапазоне от 2 до 9.*/

#include <stdio.h>
#define SIZE 7


void multiplicity_Two(int n, int *arr);


int main(void)
{
    int arr[SIZE]={0};
    multiplicity_Two(SIZE,arr);
}


void multiplicity_Two(int n, int *arr)
{
    int a, tmp;
    int count=0;
    scanf("%d", &a);
    for(int i=2;i<=9;i++)
    {
        tmp=i;
        for(int j=2;j<=a;j++)
        {
            if(!(j%tmp))
                count++;
        }
        arr[i-2]=count;
        count=0;

        printf("%d  %d\n",i,arr[i-2]);
    }
}
