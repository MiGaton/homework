

#include <inttypes.h>

#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b;
    scanf("%d%d", &a,&b);
    if (a==b)
        printf("Ecual");
    else
        a>b?printf("Above"):printf("Less");
    return 0;
}

