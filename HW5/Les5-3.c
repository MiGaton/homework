
//Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.
#include <math.h>
#include <stdio.h>

int main(void)
{
    int a,b,sum;
    scanf("%d%d", &a,&b);
    while(a<=b)
    {
        int r2=pow(a, 2);
        sum+=r2;
        a++;
    }
    printf("%d",sum);




}

