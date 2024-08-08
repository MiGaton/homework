#include<stdio.h>
#include<stdint.h>



int main (void)
{
    uint32_t S;
    uint32_t N;
    scanf("%d %d", &S, &N);

    for(int i=0;i<N; i++)
        S=(S<<31)|(S>>1);
    printf("%u", S);
}