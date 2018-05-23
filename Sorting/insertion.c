/*
 * Made by Yashasvi Goel
 * Enter the number of numbers you will input;
 * followed by the same number of integers to be sorted;
 * the next line contains the sorted output;
 * Thu Oct 12 09:05:39 IST 2017
 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
        int n;
        scanf("%d",&n);
        int *a=(int*)malloc(n*sizeof(n));
        int key;
        for(int i=0;i<n;i++)
                scanf("%d",&a[i]);
        for(int i=0;i<n;i++)    
        {                                       
                key=a[i];
                for(int j=i;j<n;j++)
                        if(key>a[j])
                        {                                                                                                                                                             
				a[i]=a[i]^a[j];
                                a[j]=a[i]^a[j];                                                                                                                                       
				a[i]=a[i]^a[j];                                                                                                                                                                      
			}                                                                 
        }
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
        printf("\n");
	return 0;
}
