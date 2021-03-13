#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx=1e5+1;
int main()
{
    ll m,n;
    cin>>m>>n;
    string s,t;
    cin>>s>>t;
    map<char,vector<ll> >mp;
    map<char,vector<ll> >:: iterator it;
    vector<ll>::iterator vtr;
    map<char,vector<ll> >:: iterator itr;
    for(int i=0;i<m;i++)
    {
        mp[s[i]].push_back(i);
    }
    /*for(it=mp.begin();it!=mp.end();it++){
        for(vtr=it->second.begin();vtr!=it->second.end();vtr++){
            cout<<*vtr<<" ";
        }
        cout<<endl;
    }*/
 
 
    ll min[m],maxi[m];
    ll ans=-1;
    for(int i=0;i<n;i++)
    {
        ll x=upper_bound(mp[t[i]].begin(),mp[t[i]].end(),ans)-mp[t[i]].begin();
        ll prevmin=mp[t[i]][x];
        min[i]=prevmin;
        ans=prevmin;
    }
    /*for(int i=0;i<n;i++){
        cout<<min[i]<< " ";
    }
    cout<<endl;*/
    ans=INT_MAX;
    for(int i=n-1;i>=0;i--)
    {
        ll x=lower_bound(mp[t[i]].begin(),mp[t[i]].end(),ans)-mp[t[i]].begin();
        //if(ans>mp[t[i]].)
        ll prevmin=mp[t[i]][x-1];
        maxi[i]=prevmin;
        ans=prevmin;
    }
    /*for(int i=0;i<n;i++){
        cout<<maxi[i]<<" ";
    }
    //cout<<endl;*/
    ans=0;
    for(int i=1;i<n;i++){
        ans=max(ans,maxi[i]-min[i-1]);
        //cout<<maxi[i]<<" "<<min[i-1]<<endl;
    }
    cout<<ans<<endl;
}
