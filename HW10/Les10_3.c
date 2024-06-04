
#include <stdio.h>
#define SIZE 1000

int main(int argc, char **argv)
{
	char c;
	int count=0, i;
	char buff [SIZE];
	
	char name_f_in[]="input.txt";	
	char name_f_out[]="output.txt";
	
	FILE *f_in, *f_out;
	
	
	if((f_in = fopen(name_f_in, "r")) == NULL)
    {
        perror("Error occured while opening input file!");
        return 1;
    }

	if((f_out = fopen(name_f_out, "w")) == NULL)
	{
        perror("Error occured while opening output file!");
        return 1;
    }
	
	while(((c = getc(f_in)) != EOF) && (c != '\n'))
	{
		buff[count++]=c;
	}
	
	buff[count] = '\0';
	printf("%s", buff);
	
	for(i=0; i<count-1; i++)
	{
		if(buff[count-1]==buff[i])

		{
			fprintf(f_out, "%d ", i);
			//printf("%d ", i);
		}
	}
	
	fclose(f_in);
	fclose(f_out);
}

