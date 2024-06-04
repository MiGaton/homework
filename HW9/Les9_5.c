/*#include <stdio.h>
 
 int find_max_array();
 
 
 
 
 int main (void)
 {
	int a[]={-100,0,1};
	find_max_array(3, a);
 }
 */
 int find_max_array(int size, int a[])
 {
	int max=*a;
	for(int j=1; j<size; j++)
	{
		if(max<a[j])
			max=a[j];
	}
	//printf("%d", max);
	return max;
 }




