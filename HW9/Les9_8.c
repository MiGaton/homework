/*В последовательности записаны целые числа от M до N ( M меньше N, M больше или равно 1)в произвольном порядке
 * , но одно из чисел пропущено (остальные встречаются ровно по одному разу). N не превосходит 1000.
 *  Последовательность заканчивается числом 0. Определить пропущенное число.*/
#include <stdio.h>
#include <string.h>
#define SIZE 1000

void swap();
void in_AscendingOrder();
int missing_Num();
int Input ();

int main (void)
{
	int arr[SIZE]={0};
	int size=Input (SIZE, arr);
	in_AscendingOrder(size, arr);
	printf("%d", missing_Num(size, arr));
}

void in_AscendingOrder(int n, int* arr)
{
	for(int i=0;i<n-1;i++)
	{	
		for(int j=i+1; j<n; j++)
		{
			if(arr[i]>arr[j])
				swap(arr+i, arr+j);
		}
	}
}

int missing_Num(int n, int* arr)
{
	int res;
	for(int i=0; i<n; i++)
	{
		if(arr[i]!=arr[i+1]-1)
		{
			res=(arr[i]+1);
			break;
		}
	}
	return res;
}

void swap (int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int Input (int n, int* arr)
{ 	
	int i=0;
	for(i=0;i<n; i++)
	{
		scanf("%d",(arr+i));
		if(!arr[i])
			break;
	}
	return i;
}
