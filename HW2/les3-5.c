

#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d",&a);
    b=a%10;
    b*=(a/10)%10;
    b*=(a/100)%10;
    printf("%d", b);
}

