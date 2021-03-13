#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        if(p%a==0||p%b==0||p%c==0) {
            cout<<0<<endl;
            continue;
        }
        else{
            ll a1=((p/a)+1)*a;
            ll b1=((p/b)+1)*b;
            ll c1=((p/c)+1)*c;
            cout<<min(min(a1,b1),c1)-p<<endl;
        }
    }
}
