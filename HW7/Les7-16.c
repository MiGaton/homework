#include <stdio.h>
#include <inttypes.h>


int deg_Two (int num)
{
    if(num>2&&num%2==0)
        return deg_Two (num/2);
    if(num==2||num==1)
        return 0;
    return 1;

}

int main(void)
{
    int a;
    scanf("%d",&a);
    deg_Two (a)?printf("NO"):printf("YES");
}
