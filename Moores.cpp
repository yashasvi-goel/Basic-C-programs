/*
 * Author: Prakhar Tiwari
 * Date : 24/10/2019
*/

#include<bits/stdc++.h>
using namespace std;

//This Function has two parts.
int moore(vector <int> &A){
	int i,j,k,l,coun=1,maj_ele=A[0];
	for(i=1;i<A.size();i++){
		if(maj_ele==A[i])
			coun++;
		else				//In this we are calculating the Majority Element
			coun--;
		if(coun==0){
			maj_ele=A[i];
			coun=1;
		}
	}
	coun=0;
	coun=count(A.begin(),A.end(),maj_ele); 	
	if(coun>A.size()/2)		// This part is checking whether the element is present more than N/2 times.
		return maj_ele;
	else
		return -1;
}

int main(){

	
	//Moore's Voting Algorithm:- This Algorithm is used to find Majority Element
	//i.e. If any element is present more than N/2 times that is a Majority Element.
	//Moore's Voting Algorithm is of two steps.
	vector <int> input;		
	int i,j,k,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>j;
		input.push_back(j);
	}
	int maj_ele=moore(input);
	cout<<maj_ele<<endl;
	return 0;
}
