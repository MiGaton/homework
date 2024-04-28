/*ССоставить функцию, которая переводит латинскую строчную букву в заглавную.
 * И показать пример ее использования.)*/

#include <stdio.h>
#include <math.h>

int changing_Letters(char c)
{
    char result;
    if(c>='a'&&c<='z')
        result='A'+(c-'a');
    //else if(c>='A'&&c<='Z')
    //    result='a'+(c-'A');
    else
        result=c;
    return result;
}

int main (void)
{
    char c;
    while((c=getchar())!='.')
    {
        putchar(changing_Letters(c));
    }
}


