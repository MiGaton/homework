
#include <stdio.h>

int main(int argc, char **argv)
{
    /*int a;
    scanf("%d",&a);
    switch(a)
    {
       case 1:
          printf("winter");
          break;
       case 2:
          printf("spring");
          break;
       case 3:
          printf("summer");
          break;
       case 4:
          printf("autumn");
          break;
    }*/
    int a;
    scanf("%d",&a);
    if(a==1)
       printf("winter");
       else if(a==2)
          printf("spring");
             else if(a==3)
                printf("summer");
    else
       printf("autumn");

    return 0;
}

