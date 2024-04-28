/*Составить функцию логическую функцию, которая определяет, верно ли,
что число простое. Используя функцию решить задачу.
int is_prime(int n)*/



#include <stdio.h>
#include <inttypes.h>

int is_prime(int n)
{
    for(int j=2;j<n;j++)
    {
        if(!(n%j))
            return 0;
    }
    if(n<=1)
        return 0;
    return 1;
}

int main(void)
{
    int n_1;
    scanf("%d",&n_1);
    is_prime(n_1)?printf("YES"):printf("NO");
}
