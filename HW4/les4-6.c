

#include <inttypes.h>

#include <stdio.h>

int main(int argc, char **argv)
{
    int16_t a,b;
    scanf("%hd%hd", &a,&b);
    if (a==b)
        printf("Equal");
    else
        a>b?printf("Above"):printf("Less");
    return 0;
}

