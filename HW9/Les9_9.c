/*Составить только функцию которая в массиве находит максимальный из
 *  отрицательных элементов и меняет его местами с последним элементом массива.
 *  Гарантируется, что в массиве только один такой элемент или же такой элемент отсутствует. 
 * Если отрицательных элементов нет - массив не менять.
Прототип функции: void swap_negmax_last(int size, int a[])*/
/*#include <stdio.h>
void swap_negmax_last();

int main (void)
{
	int a[]={-11,2,3,-1,0,6,7,8,-9,10};
	swap_negmax_last(10,a);
}
*/
void swap_negmax_last(int size, int a[])
{
	int negmax=0;
	int tmp=0;
	
	for(int i=0; i<size;i++)
	{
		if(a[i]<0&&i!=size-1)
		{
			negmax=a[i];
			tmp=i;
			for(int j=i+1; j<size; j++)
				if(a[j]<0&&negmax<a[j])
				{
					negmax=a[j];
					tmp=j;
				}
			a[tmp]=a[size-1];
			a[size-1]=negmax;
			break;
		}
	}
}
