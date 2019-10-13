/*
 * Made by Yashasvi Goel
 * Input the number upto which you want to find the prime numbers;
 * The next n lines contains the prime numbers uptill the number n;
 */
#include<bits/stdc++.h>
int main()
{
	int n;
	scanf("%d",&n);
	bool *p;
	p=(bool*)malloc((n+1)*sizeof(bool));
	memset(p, 1,sizeof(bool)*(n+1));

	for(int i=2;i*i<=n;i++)
	{
		if(p[i])
			for(int j=i*i;j<=n;j+=i)
				p[j]=0;
	}

	p[0]=p[1]=0;
	int c=0;

	for(int i=0;i<n;i++)
		if(p[i])
//			c++;
			printf("%d\n",i);
//	printf("%d\n",c);
	return 0;
}
