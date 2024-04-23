
//Ввести натурально число и напечатать все числа от 10 до введенного числа - у которых сумма цифр равна произведению цифр


#include <inttypes.h>
#include <stdio.h>

int main(void)
{
    int a,b=22;
    scanf("%d", &a);
    while(b<=a)
    {
        int num_Mult=1;
        int num_Sum=0;
        int num=b;
        while(num>0)
        {
            int dight=num%10;
            num_Mult*=dight;
            num_Sum+=dight;
            num/=10;
            if(num_Mult==num_Sum&&num==0)
                printf("%d ",b);
        }
        b++;
    }

    return 0;
}


