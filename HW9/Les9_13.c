/*Составить функцию которая возвращает количество элементов на заданном 
 * отрезке [from, to] для массива. Прототип функции int count_between(int
 *  from, int to, int size, int a[]) Например, на отрезке [4, 6] в 
 * массиве 1 2 3 4 5 6 7 8 9 10 функция вернет 3 значения*/


#include <stdio.h>
#define SIZE 10


void Input();
int count_between();

int main (void)
{
	int arr[SIZE];
	Input(SIZE, arr);
	printf("%d",count_between(4,6,SIZE,arr));
	

}

int count_between(int from, int to, int size, int a[])
{
	int sum=0;
	for(int i=0; i<size; i++)
	{
		if(a[i]>=from&&a[i]<=to)
			sum+=a[i];
	}
	return sum;
}
	
	
void Input(int n, int* arr)
{
	int i=0;
	while(i<n)
		scanf("%d", &arr[i++]);
}

void Print (int n, int *arr)
{
	for(int i=0; i<n; i++)
	{
			printf("%d",arr[i]);
	}
}


