/*Дана строка состоящая из маленьких латинских букв 'a'..'z'. 
 * В конце строки точка. Необходимо заменить повторяющиеся 
 * буквы на <буква><количество повторений>*/
#include <stdio.h>
#define BUF 1000
#define SIZE 30


int Input();
int count_Letters();
void Print();
int main (void)
{
	char arr_let[SIZE]="";
	char arr_In[BUF]="";
	int arr_cnt[SIZE]={0};
	
	int size_arr_In=Input(arr_In);
	int size_count_letters = count_Letters(size_arr_In, arr_In, arr_let, arr_cnt);
	Print(size_count_letters, arr_cnt, arr_let);
}

int count_Letters(int size_arr_in, char* arr_in, char* arr_l, int* arr_cnt)
{
	int n=0, m=0;
	for(int i=0; i<size_arr_in; i++)//какие символы
	{
		
		if(i && arr_in[i]!=arr_in[i-1])
			arr_l[n]=arr_in[i], n++;
		else if (!i)
			arr_l[n]=arr_in[i], n++;
		
	}
	
	for(int j=0; j<size_arr_in;j++)// сколько раз
	{
		if(arr_in[j]==arr_l[m])
			arr_cnt[m]++;
		else if(arr_in[j]!=arr_l[m])
		{
			m++;
			if(arr_in[j]==arr_l[m])
				arr_cnt[m]++;
		}
	}
	return m+1;
}

void Print(int size, int* arr_cnt, char* arr_l)
{
	
	for (int i = 0; i < size; i++)
		{
			printf("%c%d", arr_l[i], arr_cnt[i]);
		}
    printf("\n");

}


int Input (char* arr)
{
	int c=0,i=0;
	while((c=getchar())!='.'&& i<BUF)
		arr[i++]=c;
	return i;
	//printf("%s", arr);
}
