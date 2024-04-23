
//Организовать ввод натурального числа с клавиатуры.
//Программа должна определить наименьшую и наибольшую цифры,
//которые входят в состав данного натурального числа.


#include <stdio.h>

int main(void)
{
    int a,max_a,min_a;
    int num_New=0;

    scanf("%d",&a);
    num_New=a%10;
    min_a=num_New;
    max_a=num_New;
    while(a>0)
    {
        num_New=a%10;

        if(max_a<num_New)
            max_a=num_New;

        else if(min_a>num_New)
            min_a=num_New;
        a/=10;
    }


    printf("%d %d",min_a, max_a);
    return 0;
}

