/*
 * Made by Yashasvi Goel
 * Input the number of numbers to be sorted;
 * Enter the numbers to be sorted;
 * The next line contains the sorted array;
 * Time complexity=O(nlog(n));
 * Space complexity=O(n);
 */
#include<bits/stdc++.h>
using namespace std;
int partion(int*,int,int);
void quickSort(int *arr,int low,int h)
{
	if(low<h)
	{
		int pi=partion(arr,low,h);
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,h);
	}
}
int partion(int *arr,int low,int high)
{
	int pivot=arr[high];
	int i=low-1;

	for(int j=low;j<high;j++)
	{
		if(arr[j]<=pivot)
		{
			int u;
			i++;
			u=arr[i];
			arr[i]=arr[j];
			arr[j]=u;
		}
	}	
	int u;
	u=arr[i+1];
	arr[i+1]=arr[high];
	arr[high]=u;
	return (i+1);

}
int main()
{
		int n;
		scanf("%d",&n);
		int *r;
		r=new int[n];
		for(int i=0;i<n;i++)
			scanf("%d",&r[i]);
		quickSort(r,0,n-1);
		for(int i=0;i<n;i++)
			printf("%d ",r[i]);
		delete[] r;
		printf("\n");
	return 0;
}
