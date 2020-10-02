// Finds a continuous sub-array in an array which adds to a given number.

#include<bits/stdc++.h>
using namespace std;
#define LL long int

int main(){
    LL t;cin>>t;
    while(t--){
        LL n,a;cin>>n>>a;
        vector<LL> v(n+1);
        LL s=0;
        for(int i=0;i<n;i++){
            LL k;cin>>k;
            s+=k;
            v[i+1]=s;
            // cout << v[i] << " ";
        }
        // cout << endl;
        // for(int i=0;i<n;i)
        LL e=0;s=0;
        bool done = false;
        while(!done && e <n &&s <n){
            if(v[e]-v[s]<a){
                e++;
            }
            else if(v[e]-v[s]==a){
                done = true;
                break;
            }
            else{
                s++;
            }
        }
        if(done){
            // cout << v[s] - v[e] << endl;
            cout << s+1 << " " << e << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}
