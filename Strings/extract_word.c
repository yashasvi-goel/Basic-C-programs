#include <stdio.h>
/*
 * Made by Yashasvi Goel
 * Enter the string from which words are to be extracted;
 * the output is enclosed in ':';
 * Thu Oct 12 09:05:39 IST 2017
*/
int main()
{
	char a[100];
	scanf("%[^\n]",a);
	int u=0,d=0;
	char s[20];
	for(;a[u];u++)//testing all elements of a[];keep u=0(psuedo-static)
	{
		if(a[u]!=' ')//as long as elem!=' ';ie. single word
		{
			for(int i=0;a[u];i++,u++)//save the word from prev u to next space into s[]
			{
				s[i]=a[u];
				if(a[u]==' ')//if a[u]==' ';ie. word is over 
				{
					s[i]='\0';
					break;//break out from the loop;start search for next word
				}
				else 
					continue;
			}
			s[strlen(s)]='\0';//terminate the string s[]
			printf(":%s:",s);
		}
		else 
			continue;
	}
	return 0;
}
