#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,l=0;
        cin>>x>>y;
        set <ll> s;
        for(ll i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
            {
               s.insert(i);
               s.insert(x/i);
            }
        }
        if(s.count(y)&&y>2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
