#include <stdio.h>


void sequence_Num (int a,int b)
{
    if(a==0)
        printf("%d\n",0);
    for(int j=1;j<=b;j++)
        {
            if(a>0)
            {
                printf("%d ",b);
                a--;
            }
        }
    if(a>0)
        sequence_Num (a,b+1);


}

int main(void)
{
    int a,b;
    scanf("%d",&a);
    b=1;
    sequence_Num (a,b);
}
