//Написать функцию, которая возвращает среднее арифметическое двух переданных ей аргументов (параметров).




#include <stdio.h>
#include <inttypes.h>



int middle(int a, int b)
{

    int m=(a+b)/2;
    return m;
}


int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d", middle(a,b));

}
