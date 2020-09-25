#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],x,j=0,k=0,r;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(!i){
                r=x;
                continue;
            }
            if(x)
            {
                j++;
            }
            if(x==0||i+1==n)
            {
                a[k]=j;
                j=0;
                //cout<<a[k]<<" ";
                k++;
            }
        }
        ll sum=0;
        for(int i=0;i<k;i++)
        {
           x=a[i]/3;
           sum+=x;
        }
        if(r)
        {
            cout<<sum+1;
        }
        else
        {
            cout<<sum;
        }
        cout<<endl;
    }
}
