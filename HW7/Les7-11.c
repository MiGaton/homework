#include <stdio.h>


int sum_One (int a,int b)
{
    b+=a%2;
    //printf("n=%d\n",n);
    if(a>=2){

        int res=sum_One(a/2,b);
        //printf("n1=%d\n",b);
        return res;
    }
    printf("%d\n",b);
    return a%2 ;
}

int main(void)
{
    int a;
    scanf("%d",&a);
    sum_One (a,0);
}
