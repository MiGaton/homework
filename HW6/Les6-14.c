/*Составить функцию логическую функцию, которая определяет,
верно ли, что сумма его цифр – четное число. Используя эту функцию решить задачу.*/



#include <stdio.h>
#include <inttypes.h>

void sum_Even (int n)
{
    int a;
    while(n>0)
    {
        a+=n%10;
        n/=10;
    }
    a%2?printf("NO"):printf("YES");

}

int main(void)
{
    int n_1;
    scanf("%d",&n_1);
    sum_Even(n_1);
}
