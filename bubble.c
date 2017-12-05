#include<stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d",&n); 
	int *a;
	a=(int*)malloc(sizeof(int));
//	int temp;
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
