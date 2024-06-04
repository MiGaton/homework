/*Дан целочисленный массив из 30 элементов. Элементы массива могут
 *  принимать произвольные целые значения помещающиеся в int. Необходимо
 *  создать функцию, которая находит и выводит в порядке возрастания номера 
 * двух элементов массива, сумма которых минимальна.*/
#include <stdio.h>
#define SIZE 30


void Input();
void min_sum ();

int main (void)
{
	int arr[SIZE]={0};
	Input(SIZE, arr);
	min_sum (SIZE, arr);
}

void min_sum (int n, int *arr)
{
	int index_min_1=0, index_min_2=1;
	int min_1=arr[0];
	int min_2=arr[1];
	
	for(int i=1; i<n; i++)
	{
		if(arr[i]<min_1)
		{
			min_2=min_1;
			min_1=arr[i];
			index_min_2=index_min_1;
			index_min_1=i;
		}
		else if(arr[i]<min_2)
		{
			min_2=arr[i];
			index_min_2=i;
		}
	}
	if(index_min_1>index_min_2)
	{
		int tmp=index_min_1;
		index_min_1=index_min_2;
		index_min_2=tmp;
	}
	printf("%d %d", index_min_1, index_min_2 );
}
	
	
void Input(int n, int* arr)

{
	int i=0;
	while(i<n)
		scanf("%d", &arr[i++]);
}




