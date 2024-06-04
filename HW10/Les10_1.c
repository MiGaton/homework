
#include <stdio.h>

int main(int argc, char **argv)
{
	char arr[255];
	char c;
	int count=0;
	FILE *f;
	f=fopen("input.txt", "r");
	while(((c = getc(f)) != EOF) && (c != '\n'))
	{
		arr[count++]=c;
	}
	arr[count] = '\0';
	fclose(f);
	
	f=fopen("output.txt", "w");
	for(int i=0; i<3; i++)
	{
		if(i)
			fprintf(f,", ");
		fprintf(f, "%s", arr);
	}
	fprintf(f, " %d", count);
	fclose(f); 	
	return 0;
}

