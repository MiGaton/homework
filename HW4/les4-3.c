

#include <inttypes.h>

#include <stdio.h>

int main(int argc, char **argv)
{
    unsigned int x;
    unsigned int a,b,c;
    scanf("%u", &x);
    a=x&0xF;
    b=(x>>4)&0xF;
    c=(x>>8);
    a=a>b?a:b;
    a=a>c?a:c;
    printf("%u", a);
    return 0;

}

