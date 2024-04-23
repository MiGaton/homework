//Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, НЕ обязательно стоящие рядом.
#include <inttypes.h>
#include <stdio.h>

int main(void)
{
    int a,num,num_eq,eq=0;
    scanf("%d",&a);
    while(a>0)
    {
        num_eq=a%10;
        a/=10;
        num=a;
        while(num>0)
        {
            int b=num%10;
            num/=10;
            if(num_eq==b)
                eq=1;
        }
    }
    eq==1?printf("YES"):printf("NO");
    return 0;
}

