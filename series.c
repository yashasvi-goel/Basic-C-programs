#include <stdio.h>
extern int n,r;
int sum(int r)
{
	int w=0;
	if(r==0)
		return 0;
	if(r==1)
		return 1;
	w = sum(r-1) + r;
	printf(":%d\n",w);
	return w;
}
int mup(int n)
{
	int a=1,q=n ;
	if(q==0)
		return 1;
	for(q=n;q>1;q--)
	{a = sum(q)*mup(q-1) ; 
	//printf(":%d\n",a) ;
	}
	return a;
	if(q==1)
		return 1;
}
int main()
{
	int t,n,r,e;
	scanf("%d",&t);
	while(t>=1&&t<=20)
	{
		e=1;
		scanf("%d",&n);
		if(n>=1&&n<=100)
		{
		e=mup(n);
		printf("%d\n", e);
		}
		t--;
	}
	return 0;
}
