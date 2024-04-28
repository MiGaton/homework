//Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.




#include <stdio.h>
#include <inttypes.h>

int summ(int n)
{
    int r=0;
    for(int i=0;i<=n;i++)
        r+=i;
    return r;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d", summ(n));

}
