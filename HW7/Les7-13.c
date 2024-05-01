#include <stdio.h>


void all_SequenceDiv (int a,int b)
{

    if(a%b==0)
    {
        printf("%d ",b);
        all_SequenceDiv(a/b,b);
    }
    else if(a>b)
    {
        all_SequenceDiv(a,b+1);
    }




}

int main(void)
{
    int a,b;
    scanf("%d",&a);
    b=2;
    all_SequenceDiv (a,b);
}
