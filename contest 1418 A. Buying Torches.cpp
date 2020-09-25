#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,k;
        cin>>x>>y>>k;
        if((((y*k)+k-1)%(x-1))!=0)
        {
            cout<<(((y*k)+k-1)/(x-1))+(k+1)<<endl;
        }
        else
        {
            cout<<(((y*k)+k-1)/(x-1))+k<<endl;

        }
    }
}
