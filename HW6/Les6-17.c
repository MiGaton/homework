/*Составить логическую функцию, которая определяет, верно ли,
что в заданном числе сумма цифр равна произведению.
int is_happy_number(int n)*/



#include <stdio.h>
#include <inttypes.h>

int is_happy_number(int n)
{
    int sum=0,mul=1;
    while(n>0)
    {
        sum+=n%10;
        mul*=n%10;
        n/=10;
        //printf("%d-%d",sum,mul);

    }
    if (sum==mul)
            return 1;
    return 0;

}

int main(void)
{
    int n_1;
    scanf("%d",&n_1);
    is_happy_number(n_1)?printf("YES"):printf("NO");
}
