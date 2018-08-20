#include<stdio.h>
#include<string.h>
int toBinary(char *a)
{
	int n=strlen(a);
	int y=0;
	for(int i=n-1;i>=0;i--)
		y+=((a[n-1-i]-48)*(1<<i));
	return y;
}

int main()
{
	char a[10];
	scanf(" %s",a);
	printf("%d\n",toBinary(a));
	return 0;
}
