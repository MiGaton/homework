//Ввести два целых числа a и b (a ≤ b) и вывести квадраты всех чисел от a до b.


#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d%d", &a,&b);
    while(a<=b)
    {
        int x=a*a;
        a++;
        printf("%d ",x);
    }


    return 0;
}

