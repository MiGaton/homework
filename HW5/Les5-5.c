//Ввести целое число и найти сумму его цифр.


#include <stdio.h>

int main(void)
{
    int a,sum;
    scanf("%d", &a);
    while(a>0)
    {
        sum+=a%10;
        a/=10;
    }
    printf("%d", sum);
    return 0;
}

