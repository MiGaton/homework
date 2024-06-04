#include <stdio.h>
#define SIZE_IN 1000
#define SIZE_CNT 10


void Print();
void did_Cnt();



int main(void)
{
	char arr_in[SIZE_IN]="";
	int arr_cnt[SIZE_CNT]={0};
	scanf("%s", arr_in);
	did_Cnt(arr_in, arr_cnt);
	Print(SIZE_CNT, arr_cnt);
} 


void Print (int n, int *arr_cnt)
{
	for(int i=0; i<n; i++)
	{
		if(arr_cnt[i]>0)
			printf("%d %d\n", i, arr_cnt[i]);
	}
}

void did_Cnt(char* arr_in, int* arr_cnt)
{
	for(int i=0; arr_in[i]!=0; i++)
		arr_cnt[arr_in[i]-0x30]++;
}
