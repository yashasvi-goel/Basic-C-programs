//Author: zomsik
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, squareroot;

        cout<<"Give number: ";
        cin>>n;

        squareroot = sqrt(n);

        cout<<"Prime factors of "<<n<<": ";

        int k=2;


        while(n>1&&k<=squareroot)
        {
                while(n%k==0)
                {
                        cout<<k<<" ";
                        n/=k;
                }
                ++k;
        }

        if(n>1)
        cout<<n;
        cout<<endl;
        return 0;
}
