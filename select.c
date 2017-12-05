#include <stdio.h>
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
//		int key,temp;
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
