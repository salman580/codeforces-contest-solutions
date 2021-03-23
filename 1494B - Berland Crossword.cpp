#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    int k=0;
    while(t--)
    {
        int n;
        cin>>n;
        int u,r,d,l;
        cin>>u>>r>>d>>l;
        int nu=0,nr=0,nd=0,nl=0;
        if(u==n){
            nr++;
            nl++;
        }
        if(r==n){
            nu++;
            nd++;
        }
        if(d==n){
            nl++;
            nr++;
        }
        if(l==n){
            nu++;
            nd++;
        }
        if(u==n-1){
            if(r-nr<l-nl){nl++;}
            else{nr++;}
        }
        if(r==n-1){
            if(u-nu<d-nd){nd++;}
            else{nu++;}
        }
        if(d==n-1){
            if(r-nr<l-nl){nl++;}
            else{nr++;}
        }
        if(l==n-1){
            if(u-nu<d-nd){nd++;}
            else{nu++;}
        }
        if(nu>u||nl>l||nr>r||nd>d){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
