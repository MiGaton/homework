#include <stdio.h>


void rec_Rev (void)
{
    char c;
    scanf("%c",&c);
    if(c!='.')
    {
        rec_Rev ();
        printf("%c",c);
    }
}

int main(void)
{
    rec_Rev ();

}
