/*Author Prajawal Kumar Pandey
Dated 24th October 2019
Program to Famous Problem Aggressive Cows
*/

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    sort(arr,arr+n);
    int d=abs(arr[0]-arr[n-1])/(c-1),s=0,e=n-1,mid,ans=-1;
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]-arr[0]==d){
            ans=d;
            break;
        }else if(arr[mid]-arr[0]>d){
            e=mid-1;
        }else{
            ans=arr[mid]-arr[0];
            s=mid+1;
        }
    }

    cout<<ans<<endl;

    return 0;
}
