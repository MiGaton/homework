#include <stdio.h>


void rec_Num (int a,int b)
{
    printf("%d ",a);
    if (a>b&&a!=b)
        rec_Num(a-1,b);
    else if(b>a&&a!=b)
        rec_Num(a+1,b);


}

int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    rec_Num (a,b);


}
