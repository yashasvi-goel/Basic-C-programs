#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int main()
{
    int n, pierw, pom;

        cout<<"Give number: ";
        cin>>n;

        pierw = sqrt(n);

        cout<<"Prime factors of "<<n<<": ";

        int k=2;


        while(n>1&&k<=pierw)
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

        system("pause");
        return 0;
}
