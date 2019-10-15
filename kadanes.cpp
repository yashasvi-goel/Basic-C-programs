/*Author: Sahil Kalamkar
  Date: 13/10/2019
  Program to calculate the maximum sum of a subarray.
  The requirement of this algorithm is that there must be atleast one positive element in the array.
  It does not work when we have all elements as negative.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *input = new int[n];
	for(int i=0;i<n;i++)cin>>input[i];
	/*
		Here we are maintaining two variables, currentSum to keep the track of the running sum
		and maximumSum which gives us the maximum sum of a subarray until that point.
	*/
	int currentSum = 0;
	int maximumSum = 0;

	for(int i=0;i<n;i++)
	{
		currentSum+=input[i];

		//Updation of maximumSum when currentSum exceeds maximumSum.
		maximumSum=max(maximumSum,currentSum);
		if(currentSum<0)
			currentSum=0;
	}
	cout<<maximumSum<<'\n';
	return 0;
}
