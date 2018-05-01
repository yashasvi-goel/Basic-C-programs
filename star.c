/*
* Made by Yashasvi Goel
* Input the number of lines ypu want in your pattern;
* The output contains a pattern of stars which look like a play button;
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=(n+1)/2;i++)
	{	for(int j=1;j<=i;j++)
			printf("*");
		//printf("*");
	printf("\n");
	}
	for(int i=(n)/2;i>0;i--)
	{
		for(int j=i;j>0;j--)
			printf("*");
		printf("\n");
	}
	return 0;
}
