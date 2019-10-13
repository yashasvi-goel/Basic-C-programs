#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1e9+7;

ll modularExponentiation(ll base,ll exponent,ll modulo)
{
	if(exponent==0)
		return 1;
	
	
	if(!(exponent&1))
	{	
		ll res = modularExponentiation(base,exponent/2,modulo);
		return (res*res)%modulo;
	}
	else
	return ((base%modulo)*modularExponentiation(base,exponent-1,modulo))%modulo;
}

int main()
{
	int base,power,m;
	cin>>base>>power>>m;

	cout<<modularExponentiation(base,power,m)<<'\n';
	return 0;
}
