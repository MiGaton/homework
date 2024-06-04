/*Функция принимает исходный массив a[] и сжимает в массив b[], N - число элементов в массиве a[].*/

int compression(int a[], int b[], int N)
{
	int cnt=0;
	int i=0;
	if(a[0]==1)
		b[0]=0,cnt++;
	for(int j=0; j<N; j=i)
	{
		i=j;
		do
		{
			i++, b[cnt]++;
		} while(i<N && a[j]==a[i]);
	cnt++;
	}
	return cnt;
}




