#include <stdio.h>


int rec_Numsum (int a)
{
    int res=a%10;
    if(a>=10)
        res+=rec_Numsum(a/10);
    return res;
}

int main(void)
{
    int a;
    scanf("%d",&a);
    printf("%d",rec_Numsum (a));
}
