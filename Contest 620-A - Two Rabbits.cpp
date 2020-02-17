#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        if((y-x)%(a+b)==0)
        {
            cout<<(y-x)/(a+b)<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        //cout<<(y-x)/(a+b)<<endl;
    }
}
