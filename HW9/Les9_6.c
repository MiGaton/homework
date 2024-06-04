/*Написать только одну логическую функцию, которая определяет, верно ли, что среди элементов массива есть два одинаковых.
 * Если ответ «да», функция возвращает 1; если ответ «нет», то 0. Строго согласно прототипу:
int is_two_same(int size, int a[]);*/
/*#include <stdio.h>
 
 int is_two_same();
 
 
 
 
 int main (void)
 {
	int a[]={1,0,6};
	is_two_same(3, a);
 }*/
 
 int is_two_same(int size, int a[])
 {
	int result=0;
	for(int i=0; i<size-1; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(*(a+i)==*(a+j))
			{
				result=1;
				break;
			}
		}
	}
	return result;
 }




