#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n;
        ll a[n+1],b[n+1];
        bool p[n+1]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[a[i]]=i;
        }
        ll k=n;
        for(int i=n;i>=1;i--)
        {
            if(p[i]==false)
            {
                for(int j=b[i];j<=k;j++)
                {
                    cout<<a[j]<<" ";
                    p[a[j]]=true;
                }
                k=b[i]-1;
            }
        }
        cout<<endl;
    }
}
