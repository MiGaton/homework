#include <stdio.h>


int rec_Num (int num)
{
    int c;
    scanf("%d",&c);
    if (c==0)
        return num;
    if(c>num||num==0)
        num=c;
    return rec_Num(num);

}

int main(void)
{
    printf("%d",rec_Num(0));
}
