//Составить функцию, модуль числа и привести пример ее использования.

#include <stdio.h>
#include <inttypes.h>



int number_Module (int a)
    {
        a>0?a:(a*=-1);
        return a;
    }


int main ()
{
    int num;
    scanf("%d",&num);
    printf("%d", number_Module (num));

}
