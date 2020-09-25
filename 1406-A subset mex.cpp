#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,i;
        cin>>n;
        bool y[101]={0},z[101]={0};
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(y[x])
            {
                z[x]=true;
            }
            y[x]=true;
        }
        int p=0,q=0;
        bool x1=true,x2=true;
        for(i=0;i<101;i++)
        {
            if(!y[i]&&x1)
            {
                p=i;
                x1=false;
            }
            if(!z[i]&&x2)
            {
                q=i;
                x2=false;
            }
        }
        cout<<q+p<<endl;

    }
}
