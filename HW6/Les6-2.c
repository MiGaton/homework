//Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования.

#include <stdio.h>
#include <inttypes.h>



int power (int num, int p)
    {


        int num_p=1;
        for(int i=1;i<=p;i++)
        {
            num_p*=num;
        }
        return num_p;
    }


int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d", power(a,b));

}
