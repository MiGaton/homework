#include <stdio.h>


void rec_Num (int n)
{
    printf("%d ",n);
    if (n>1)
        rec_Num(n-1);
}

int main(void)
{
    int n;
    scanf("%d",&n);
    rec_Num (n);

}
