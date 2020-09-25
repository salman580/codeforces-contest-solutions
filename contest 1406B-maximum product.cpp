#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool compare(int i,int j)
{
    return (abs(i)>abs(j));

}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n],c[n],x;
        bool y=true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=0&&y)
            {
                y=false;
            }
        }
        sort(a,a+n,compare);
        /*for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;*/
        ll pro1=1,pro2=1;

        if(y||(sizeof(a)/sizeof(a[0])==5))
        {
            cout<<a[n-5]*a[n-4]*a[n-3]*a[n-2]*a[n-1]<<endl;
        }
        else
        {
            if((a[0]*a[1]*a[2]*a[3]*a[4])>=0){
                cout<<a[0]*a[1]*a[2]*a[3]*a[4]<<endl;
            }
            else{
                int j=4,k=4;
                while(a[j]>0){
                   j--;
                }
                 while(a[k]<0){
                   k--;
                }
                if(k<0){
                    k=4;
                }
                for(int i=0;i<=4;i++)
                {

                    if(i!=j){
                        //cout<<i<<" ";
                        pro1*=a[i];
                    }

                    if(i!=k){
                        //cout<<k<<" ";
                        pro2*=a[i];
                    }

                }
                //cout<<endl<<pro1<<" "<<pro2<<endl;
                ll sum1=0,sum2=0,big=0;
                for(int i=5;i<n;i++)
                {
                    if(sum1<pro1*a[i]){
                        sum1=pro1*a[i];
                        //cout<<sum1<<endl;
                    }
                    if(sum2<pro2*a[i]){
                        sum2=pro2*a[i];
                    }
                }
                cout<<max(sum1,sum2)<<endl;
            }
        }

    }
}
