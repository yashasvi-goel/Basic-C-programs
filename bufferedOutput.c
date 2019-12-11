/*
 * Author:Yashasvi Goel
 * Date:11/12/19
 *
*/
#include<stdio.h>
#include<unistd.h>
int main()
{
	int d=100;
	int k=0;
	while(d>0)
	{
		char *top="The screen now has %d stars.";
		printf(top,d);
		for(int i=0;i<d;i++)
			printf("*");
		for(int i=0;i<=(100-d);i++)
			printf(" ");
		printf("\r");
		k=5;
		d=d-k;
		sleep(1);
		fflush(stdout);
	}
	printf("\n");
	return 0;
}
