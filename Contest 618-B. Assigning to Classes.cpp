#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[2*n],i,j,k;
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+(2*n));
        cout<<abs(a[n]-a[n-1])<<endl;
    }
}
