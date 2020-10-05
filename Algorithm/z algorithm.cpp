#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

void z_algo(char s[])
{
	int z[20] = {0};
	int n = strlen(s),i,l = 0,r = 0;
	
	for(i = 1 ; i< n; i++)
	{
		if(i <= r)
		{
			z[i] = z[i-l];
		}	  

		while(i + z[i] < n)
		{
			if(s[z[i]] == s[i+z[i]])
				z[i]++;
			else 
				break;
		}
		
		if(i +z[i]-1 > r)
		{
			l = i;
			r = i + z[i]-1;
		}
		
	}
	
	cout<<"\n";
	
	for(i = 1; i<n;i++)
		cout<<z[i]<<" ";
}

int main()
{
	char ch[60], pattern[30], txt[30];
	
	cout<<"\nEnter pattern:";
	gets(pattern);
	
	cout<<"\nEnter text:";
	gets(txt);
	
	strcpy(ch,pattern);
	strcat(ch,"$");
	strcat(ch,txt);
	
	cout<<"\nch:"<<ch;
	
	z_algo(ch);
	
	return 0;
}
