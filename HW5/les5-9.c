//Ввести целое число и определить, верно ли, что все его цифры четные.
#include <inttypes.h>
#include <stdio.h>



int main(void)
{
    int a,num,sum1=0,sum2=0;
    scanf("%d",&a);
    while(a>0)
    {
        num=a%10;
        a/=10;
        sum1++;
        if(!(num%2))
            sum2++;
    }
    sum1==sum2?printf("YES"):printf("NO");
    return 0;
}

