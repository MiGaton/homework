//Посчитать количество четных и нечетных цифр числа.

#include <stdio.h>

int main(void)
{
    int a,n1=0,n2=0;;

    scanf("%d",&a);
    while(a>0)
    {
        int num=a%10;

        if(!(num%2))
            n1++;

        else
            n2++;
        a/=10;
    }


    printf("%d %d",n1, n2);
    return 0;
}
