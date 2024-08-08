#include<stdio.h>
#include<stdint.h>



int main (void)
{
    int res=1, max, tmp, N;
    scanf("%d %d", &N, &max);
    for(int i=0;i<N-1;i++)
    { 

        scanf("%d",&tmp);
        if(max==tmp)
            res++;
        if(tmp>max)
            max=tmp, res=1;
    }
    printf("N=%d\n", res);
}