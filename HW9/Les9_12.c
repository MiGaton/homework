/*ДСоставить функцию которая меняет в массиве минимальный и максимальный 
 * элемент местами. Прототип функции
 *  void change_max_min(int size, int a[])*/
/*#include <stdio.h>
#define SIZE 5


void Input();
void change_max_min();
void change_max_min();
void Print ();
int main (void)
{
	int arr[SIZE];
	Input(SIZE, arr);
	change_max_min(SIZE, arr);
	Print (SIZE, arr);

}*/

void change_max_min(int size, int a[])
{
	int min=a[0], max=a[0];
	int index_min, index_max, tmp;
	
	for(int i=1; i<size; i++)
	{
		if(min>a[i])
			min=a[i],index_min=i; 
		else if(max<a[i])
			max=a[i], index_max=i;
	}
	
	tmp=a[index_min];
	a[index_min]=a[index_max];
	a[index_max]=tmp;
}
	
	
/*void Input(int n, int* arr)
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

*/

