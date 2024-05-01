#include <stdio.h>

unsigned akkerman(unsigned m, unsigned n) {
    return ( ! m ) ? n + 1 : ( ! n ) ? akkerman(m - 1, 1) : akkerman(m - 1, akkerman(m, n - 1));
}

int main(void)
{
    unsigned m, n;
    scanf("%u%u", &m, &n);
    printf("%u",akkerman(m, n));

    return 0;
}
