#include <stdio.h>
#include <inttypes.h>


int number_a (int i)
{
    char a;
    scanf("%c",&a);
    if (a=='a')
        i++;
    if (a!='.')
        return number_a(i);
    return i;
}

int main(void)
{
    printf("%d",number_a(0));
}
