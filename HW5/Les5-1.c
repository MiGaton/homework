//Ввести натуральное число вывести квадраты и кубы всех чисел от 1 до этого числа. Число не превосходит 100.


#include <stdio.h>

int main(void)
{
    int a,inv=1;
    scanf("%d", &a);
    while(a>0)
    {
        int inv2=inv*inv;
        int inv3=inv*inv*inv;
        printf("%d %d %d\n", inv,inv2,inv3);
        inv++;
        a--;
    }
    return 0;
}

