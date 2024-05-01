#include <stdio.h>


int rec_Nutnum (int a,int divid)
{
    if(a==divid)
        return 1;
    else if (a%divid!=0&&a>1)
        return rec_Nutnum(a,divid+1);
    else return 0;

}

int main(void)
{
    int a;
    scanf("%d",&a);
    rec_Nutnum(a,2) ? printf("YES") : printf("NO");
}
