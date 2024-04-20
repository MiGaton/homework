

#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%u%u", &a,&b);
    if(a>b)
        printf("%u%u", a,b);
    else
        printf("%u%u", b,a);
}

