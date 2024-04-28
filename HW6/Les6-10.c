/*Составить функцию, печать всех простых множителей числа. Использовать ее для печати всех простых множителей числа.
void print_simple(int n)*/



#include <stdio.h>
#include <inttypes.h>

void print_simple(int n)
{
    int simple_Num=1;
    int i=2;//делитель

    while(n>1)
    {
        if(i>2)//Определяем простое ли число
        {
            for(int j=2;j<i;j++)
            {
                if((i%j)==0)//если не простое
                {
                    simple_Num=0;
                    i++;
                }
                else
                    simple_Num=1;
            }
        }

        if((n%i==0)&&(simple_Num==1))
        {
            n/=i;
            printf("%d ",i);
        }
        else
            i++;
    }
}

int main(void)
{
    int n;
    scanf("%d",&n);
    print_simple(n);
}
