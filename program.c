#include<iostream.h>
void fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n--);
}
int main()
{
	int n;
	printf("Enter two numbers ");
	scanf("%d",&n);
	printf("%d",&n);
	return 0;
}
