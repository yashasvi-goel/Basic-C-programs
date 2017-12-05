#include <stdio.h>

int main()
{
	int n, b, a,i,t ;
	scanf("%d",&t);
	while(t>=1)
	{
	 a=0 , b=1 ;
	scanf("%d", &n);
	i=1;
	do{printf("%d ", a);	
		b=a+b;
		a=b;
	}
	while
	(i<=n&&i++);
	t--;
	}
	return 0;
}

