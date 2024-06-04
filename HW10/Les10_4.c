
#include <stdio.h>
#define SIZE 1000
int main(int argc, char **argv)
{
	char name_f_in[]="input.txt";
	char name_f_out[]="output.txt";
	char buff [SIZE];
	char compar [SIZE]="";
	char c;
	unsigned int cnt=0, tmp=0, flag=0, cn=0, a=0,i;
	
	FILE *f_in, *f_out;
	if((f_in=fopen(name_f_in, "r"))==NULL)
	{
		perror("Error occured while opening input file!");
			return 1;
	}
	
	if((f_out=fopen(name_f_out, "w"))==NULL)
	{
		perror("Error occured while opening output file!");
			return 1;
	}
	
	while(((c=getc(f_in))!=EOF)&&(c != '\n'))
	{
			buff [cnt++]=c;
			
			if(buff[cnt-1]==' ')
				tmp=cnt;
	}
	buff [cnt]='\0';
	
	for( i=0; i<tmp; i++)
	{
		for(int j=0; j<tmp-1; j++)
		{
			if((buff[i]==buff[j])&&(i!=j))
			{
				flag=0;
				break;
			}
			else 
				flag=1;
			cn=0;
		}
		if(flag)
		{
			for(int l=tmp; l<cnt; l++)
			{
				if(buff[i]==buff[l])
					cn++;//счтетчик повторений 
			}
			if(cn==1)
			{
				compar [a++]=buff[i];
				compar [a++]=' ';
				cn=0;
			}
		}
			
	}
	fprintf(f_out,"%s", compar);
	fclose(f_in);
	fclose(f_out);
	
}

