//Ввести целое число и определить, верно ли, что все его цифры расположены в порядке возрастания.
#include <inttypes.h>
#include <stdio.h>



int main(void)
{
    int a,num_New,num_Old, err;

    scanf("%d",&a);
    num_New=a%10;
    num_Old=num_New;
    a/=10;

    while(a>0)
    {
        num_New=a%10;
        a/=10;
        if(num_Old<=num_New)
            err=1;//если не по возростанию
        num_Old=num_New;
    }
    err!=1?printf("YES"):printf("NO");
    return 0;
}

