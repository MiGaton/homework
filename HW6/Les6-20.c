/*Проверить строку состоящую из скобок "(" и ")" на корректность.*/
#include <inttypes.h>
#include <stdio.h>
#include <math.h>

int сorrect_Brackets(char c)
{
    if(c==0x28)
        return 1;
    else if(c==0x29)
        return 2;
    return 0;
}

int main (void)
{
    char c;
    int n1=0;
    int n2=0;
    while((c=getchar())!='.')
    {
        if(сorrect_Brackets(c)==1)
            n1++;
        else if(n1!=0&&сorrect_Brackets(c)==2)
            n2++;
        //printf("%d-%d\n",n1,n2);
    }
    n1==n2?printf("YES\n"):printf("NO\n");
}


