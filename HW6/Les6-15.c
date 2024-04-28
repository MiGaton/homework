/*Составить функцию логическую функцию, которая определяет, верно ли, что в заданном числе все цифры стоят по возрастанию. Используя данную функцию решить задачу.
int grow_up(int n)*/



#include <stdio.h>
#include <inttypes.h>

void sum_Even (int n)
{
    int er=0;


    while(n>0)
    {
        int a=n%10;
        n/=10;
        int b=n;
        while(b>0)
        {
            int c=b%10;
            b/=10;
            if (a<=c)
            {
                er=1;
            }
        }
    }
    if (er==0)
        printf("YES");
    else
        printf("NO");

}

int main(void)
{
    int n_1;
    scanf("%d",&n_1);
    sum_Even(n_1);
}
