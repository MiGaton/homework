


#include <inttypes.h>

#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b,c,max,x;
    scanf("%d", &x);
    a=x%10;
    b=(x/10)%10;
    c=(x/100)%10;
    max=a>b?a:b;
    max=a>c?a:c;
    printf("%d", max);
    return 0;

}

