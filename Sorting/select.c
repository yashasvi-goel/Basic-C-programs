#include <stdio.h>
/*
 * Made by Yashasvi Goel
 * Enter the number of numbers which you desire to sort;
 * followed by the same number of numbers;
 * The next line contains all the sorted numbers;
 * Time Complexity=O(n^2)
 * Space Complexity=O(n)
 * Thu Oct 12 09:05:39 IST 2017
*/
int main()
{
	int t;
//	scanf("%d",&t);
//	while(t>0)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		int key,temp;
		//		for(int k=0;k<n;k++)
		for(int i=0;i<n;i++)
		{
			key=i;
			for(int j=i+1;j<n;j++)
			{
				if(a[key]>a[j])
				{
					a[key]=a[key]^a[j];
                                        a[j]=a[key]^a[j];
                                        a[key]=a[key]^a[j];
				}
			}
		}
		for(int i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\n");
		t--;
	}
	return 0;
}
