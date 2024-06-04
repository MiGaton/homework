
#include <stdio.h>
#define SIZE 255

int main(int argc, char **argv)
{
	char name_finpun []="input.txt";
	char name_foutput []="output.txt";
	char buff[SIZE];
	char c=0;
	int cn=0, i=0;
	
	FILE *f_in, *f_out;
	
	f_in=fopen(name_finpun, "r");
	f_out=fopen(name_foutput, "w");
	while(((c=getc(f_in))!=EOF)&&(c!='\n'))
	{
		buff[cn++]=c;
	}
	buff[cn]='\0';
	//printf("%s  ", buff);
	for(i=0;i<cn;i++)
	{
		if(buff[i]=='a')
			buff[i]='b';
		else if(buff[i]=='b')
			buff[i]='a';
		if(buff[i]=='A')
			buff[i]='B';
		else if(buff[i]=='B')
			buff[i]='A';
	}
	
	fprintf(f_out,"%s",buff);
	fclose(f_in);
	fclose(f_out);
	
	return 0;
}

