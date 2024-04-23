//Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, стоящие рядом.
#include <inttypes.h>
#include <stdio.h>

int main(void)
{
    int a,eq=0;
    scanf("%d",&a);
    while(a>0)
    {
        int r1=a%10;
        a/=10;
        int r2=a%10;
        if(r1==r2)
            eq=1;
    }
    eq==1?printf("YES"):printf("NO");
    return 0;
}

