// Given an even number (greater than 2 and less than 20000), returns two prime numbers whose sum will be equal to given number

#include<bits/stdc++.h>
using namespace std;
#define LL long int
#define MAXN 10000
set<LL> primes;
void getp(){
    for(LL i=2;i<MAXN;i++){
        bool isPrime=true;
        for(auto p:primes){
            if(i%p==0){
                isPrime=false;break;
            }
        }
        if(isPrime){
            primes.insert(i);
        }
    }
}
int main(){
    getp();
    LL t;cin>>t;
    while(t--){
        LL n;cin >>n;
        for(auto p:primes){
            if(p<n && (primes.find(n-p)!=primes.end())){
                cout << p <<" " << n-p << endl;
                break;
            }
        }
    }
}
