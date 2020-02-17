#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll fnum[n],i,j,k;
        ll big=0,p,low=INT_MAX;
        bool y=false;
        for(i=0;i<n;i++)
        {
            cin>>fnum[i];
            if(big<fnum[i]){
                big=fnum[i];
            }
            if(x%fnum[i]==0){
                p=x/fnum[i];
                if(p<low){
                    low=p;
                }
            }
        }
        ll low2=(x/big)+1;
        if(big>x&&low>1){
            cout<<2<<endl;
        }
        else if(low<=low2&&low!=0){
            cout<<low<<endl;
        }
        else{
            cout<<low2<<endl;
        }
    }
}
