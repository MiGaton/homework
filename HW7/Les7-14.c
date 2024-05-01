#include <stdio.h>


void rec_Num (void)
{
    int num;
    scanf("%d",&num);
    if(num%2)
        printf("%d ",num);
    if(num!=0)
        rec_Num();


}

int main(void)
{
    rec_Num();
}
