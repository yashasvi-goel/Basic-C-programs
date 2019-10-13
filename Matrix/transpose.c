#include <stdio.h>
/*
 * Made by Yashasvi Goel
 * Enter the string from which words are to be extracted;
 * the output is enclosed in ':';
 * Thu Oct 12 10:05:39 IST 2017
*/
int main()
{
	int a[3][3];int b[3][3];
	int i,j,r=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			a[i][j]=r++;
	}
	for(i=0;i<3;i++)
	{
		int u=0;
		for(j=0;j<3;j++)
		{
			u=a[j][i];
			b[j][i]=u;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",b[j][i]);
		printf("\n");
	}
}
