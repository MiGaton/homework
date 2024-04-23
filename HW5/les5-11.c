
//Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней


#include <inttypes.h>
#include <stdio.h>

int main(void)
{
    int a,rev_a=0;

    scanf("%d",&a);


    while(a>0)
    {
        rev_a=rev_a*10+a%10;//реверс
        a/=10;

    }


    printf("%d",rev_a);
    return 0;
}

