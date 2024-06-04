
#include <stdio.h>
#define SIZE 1001

int main(int argc, char **argv)
{
	char name_finpun []="input.txt";
	char name_foutput []="output.txt";
	char buff[SIZE];
	char c=0;
	int cn=0, i=0, flag=0;
	
	FILE *f_in, *f_out;
	f_in=fopen(name_finpun, "r");
	f_out=fopen(name_foutput, "w");
	while(((c=getc(f_in))!=EOF)&&(c!='\n'))
	{
		buff[cn++]=c;
	}
	buff[cn]='\0';
	//printf("%s  ", buff);
	//printf("%d", cn);
		
	for(i=0; i<cn/2;i++)
	{
		if(buff[i]!=buff[cn-1-i])
		{
			break;
			flag=0;
		}
		flag=1;
	}
	if(cn==1)
		flag=1;
	fprintf(f_out, "%s", flag ?  "YES" : "NO");
	fclose(f_in);
	fclose(f_out);
	
	return 0;
	
}

