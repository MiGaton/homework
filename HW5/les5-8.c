//вести целое число и определить, верно ли, что в нём ровно одна цифра «9».
#include <inttypes.h>
#include <stdio.h>

#define num_Eq 9
#define num_Repet 1

int main(void)
{
    int a,num,sum=0;
    scanf("%d",&a);
    while(a>0)
    {
        num=a%10;
        a/=10;
        if(num==num_Eq)
            sum++;
    }
    sum==num_Repet?printf("YES"):printf("NO");
    return 0;
}

