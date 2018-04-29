#include<stdio.h>
#include <stdlib.h>
/*
 * Made by Yashasvi Goel
 * Enter the number of integers to be sorted;
 * followed by the the same the number of integers;
 * Sorted numbers are outputted
 * Thu Oct 12 09:05:39 IST 2017
*/
int main()
{
	int n;
	scanf("%d",&n); 
	int *a;
	a=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	for(int j=n-1;j>i;j--)
		if(a[j]<a[j-1])
		{
			a[j]=a[j]^a[j-1];
			a[j-1]=a[j-1]^a[j];
			a[j]=a[j]^a[j-1];
		}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
