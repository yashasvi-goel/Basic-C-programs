/*
	This is a data set generator for the numbers
	=>compile using gcc and run as
	=>$./a.out>>data
	=> You will get 50000 randomly generated numbers
	=>These numbers can be used as input for other sorting algorithms in this repository
*/
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
