
//Ввести натуральное число и определить, верно ли, что сумма его цифр равна 10.

#include <inttypes.h>
#include <stdio.h>

int main(void)
{
    int a=0,sum=0;
    scanf("%d", &a);
    while(a>0)
    {
        int dight =a%10;
        sum+=dight;
        a/=10;
    }
    sum==10?printf("YES"):printf("NO");
    return 0;
}


