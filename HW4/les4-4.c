
#include <inttypes.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    unsigned int a, b, c, d , max, min, sum;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    max=a>b?a:b;
    max=max>c?max:c;
    max=max>d?max:d;

    min=a<b?a:b;
    min=min<c?min:c;
    min=min<d?min:d;
    printf("%d", sum=max+min);
    return 0;
}

