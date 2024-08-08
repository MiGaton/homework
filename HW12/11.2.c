#include<stdio.h>
#include<stdint.h>

int main(void)
{
    uint8_t N;
    uint8_t S;
    scanf("%d ",&N);
    while((S=getchar())!=EOF)
    {
        if((S>='A')&&(S<='Z')&&(S+N)>'Z')
            printf("%c", 'A'+((S+N)-'Z'-1));

        else if((S>='a')&&(S<='z')&&(S+N)>'z')
            printf("%c", 'a'+((S+N)-'z'-1));

        else if(S!=' '&&S!='.')
            printf("%c", S+N);
        else
            putchar(S);
        if(S=='.')
            break;
    }
    return 0;
}
