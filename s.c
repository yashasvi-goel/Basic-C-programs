#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *a;
	a=(int*)malloc(50000*sizeof(int));
	for(int i=0;i<50000;i++)
		a[i]=rand();
	for(int i=0;i<50000;i++)
		printf("%d\n",a[i]);
	return 0;
}
