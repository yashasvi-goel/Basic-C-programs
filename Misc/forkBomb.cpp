#include<unistd.h>

int main()
{
	int n=100000;
	while(n--)
		fork();
}
