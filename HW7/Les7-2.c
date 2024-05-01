#include <stdio.h>


int num (int a)
{
    int Res=a;
    if (a==1)
        return 1;
    if (a==0)
        return 0;
    return Res+=num(a-1);
}

int main(void)
{
    int n=0;
    scanf("%d",&n);
    printf("%d ",num(n));

}
