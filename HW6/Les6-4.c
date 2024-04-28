//Описать функцию вычисления f(x) по формуле: 
//f(x)= x*x при -2 ≤ x < 2;
//x*x+4x+5 при x ≥ 2;
//4 при x < -2.
//Используя эту функцию для n заданных чисел, вычислить f(x). Среди вычисленных значений найти наибольшее.




#include <stdio.h>
#include <inttypes.h>



int form_Eq (int x)
{
    int num;
    if((x>=-2)&&(x<2))
        num=x*x;
    else if(x>=2)
        num=(x*x)+(4*x)+5;
    else
        num=4;
    //printf("%d\n",num);
    return num;


}

int main(void)
{
    int n;
    scanf("%d",&n);
    int max;
    while(n)
    {
        int max_new=form_Eq(n);
        if (max_new>max)
            max=max_new;
        scanf("%d",&n);
    }
    printf("%d", max);



}
