#include <stdio.h>


int num (int a)
{
    if (a<1)
        return 1;;
    int result=num(a-1);
    printf("%d ",a);
    return result;
}

int main(void)
{
    int n=0;
    scanf("%d",&n);
    num(n);
}
