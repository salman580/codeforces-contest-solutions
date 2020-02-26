#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,j=0,k,sum=0,sum2=0,product=1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            product*=a[i];
        }
        if(sum!=0&&product!=0)
        {
            cout<<0<<endl;
        }
        //sum=0;
        else
        {
            for(i=0;i<n;i++)
            {
                sum2+=a[i];
                if(a[i]==0)
                {
                    sum2++;
                    j++;
                }
            }
            if(sum2==0)
            {
                cout<<1+j<<endl;
            }
            else
            {
                cout<<j<<endl;
            }
            //cout<<sum2<<endl;
            //cout<<1+j<<endl;
            //cout<<j<<endl;
            j=0;
        }
    }
}
