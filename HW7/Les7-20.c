#include <stdio.h>
#include <inttypes.h>


int recurs_power(int n, int p)
{
    if(p>0)
        return n*recurs_power(n, p-1);
    return 1;
}

int main(void)
{
    int n,p;
    scanf("%d%d",&n,&p);
    printf("%d",recurs_power(n, p));
}
