#include <stdio.h>
#include <inttypes.h>


void print_digits(int n)
{
    int a=n%10;
    if (n>=10)
        print_digits(n/10);
    printf("%d ",a);
}

int main(void)
{
    int a;
    scanf("%d",&a);
    print_digits(a);

}
