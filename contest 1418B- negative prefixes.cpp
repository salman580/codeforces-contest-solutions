#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int a[n],l[n],p[n],q[n],j=0,k=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>l[i];
            if(l[i]==0&&a[i]>=0)
            {
                p[j]=a[i];
                //cout<<p[j]<<" ";
                j++;
            }
            if(l[i]==0&&a[i]<0)
            {
                q[k]=a[i];
                //cout<<q[k]<<" ";
                k++;
            }
        }
        sort(p,p+j,greater<int>());
        sort(q,q+k,greater<int>());
        int r=0;
        for(int i=0;i<n;i++)
        {
            if(l[i]==0&&r<j)
            {
                a[i]=p[r];
                //cout<<a[i]<<" ";
                l[i]=1;
                r++;
            }
            //cout<<l[i]<<" ";
        }
        r=0;
        for(int i=0;i<n;i++)
        {
            if(l[i]==0&&r<k)
            {
                a[i]=q[r];
                //cout<<a[i]<<" ";
                r++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
