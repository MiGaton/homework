#include <stdio.h>


void rec_num_Bin (int a)
{
    if (a>=2)
        (rec_num_Bin (a/2));
    int res=a%2;
    printf("%d",res);
}

int main(void)
{
    int n=0;
    scanf("%d",&n);
    rec_num_Bin (n);

}
