/*Author: Sahil Kalamkar
 *Date: 13/10/2019		 
 */
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1e9+7;

//Function to calculate a raised to the power of b modulo m for large values.
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
	//Input Format: 3 integers denoting the base,the power and the integer with which you want the remainder.
	int base,power,m;
	cin>>base>>power>>m;
	cout<<modularExponentiation(base,power,m)<<'\n';
	return 0;
}
