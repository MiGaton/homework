/*Написать только одну функцию. Всю программу отправлять не надо. 
 *Вывести в порядке возрастания цифры, входящие в строку. Цифра - количество. 
Функция должно строго соответствовать прототипу:
void print_digit(char s[])*/

/*
#include <stdio.h>
#define SIZE_IN 1000
#define SIZE_CNT 10



void print_digit();


int main(void)
{
	char arr_in [SIZE_IN]="";
	scanf("%s", arr_in);
	print_digit(arr_in);
} 
*/
void print_digit(char s[])
{
	int arr_cnt[10]={0};
	for(int i=0; s[i]!=0; i++)
	{
		if((s[i]>='0') && (s[i]<='9'))
			arr_cnt[s[i]-0x30]++;
	}
	for(int j=0; j<10; j++)
	{
		if(arr_cnt[j]>0)
			printf("%d %d\n", j, arr_cnt[j]);
	}
	
}




