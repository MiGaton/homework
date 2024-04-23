//Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

#include <inttypes.h>
#include <stdio.h>

int main(void)
{
    int a,count;
    scanf("%d",&a);
    while(a>0)
    {
        a/=10;
        count++;
    }
    count==3?printf("YES"):printf("NO");
    return 0;
}

