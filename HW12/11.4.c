#include<stdio.h>
#include<stdint.h>



int main (void)
{
    uint32_t N;
    int32_t K, res;
    scanf("%d %d", &N,&K);
    printf( "%d",res= (~(-1<<K))&N);
}