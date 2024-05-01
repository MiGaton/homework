#include <stdio.h>


int num (int a)
{
    if (a%10==a)
    {
        printf("%d ",a);
        return a;
    }
    int res=a%10;
    a=num(a/10);
    printf("%d ",res);
    return a;
}

int main(void)
{
    int n=0;
    scanf("%d",&n);
    num(n);

}
