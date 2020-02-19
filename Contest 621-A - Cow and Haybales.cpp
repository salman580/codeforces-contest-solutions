#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int a[n],i,j=0,k=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0,pro=0,l=0;
        i=1;
        int temp=0,temp2=0;
        while(temp2<=d&&i<n){
            temp=d-temp2;
            if(temp< (a[i]*i)){
                while( temp<(a[i]*i)){
                    a[i]--;
                }
            }
            temp2+=(a[i]*i);
            //cout<<temp2<<endl;
            if(temp2>d){
                break;
            }
            sum+=a[i];
            i++;
        }
        cout<<sum+a[0]<<endl;
    }
}
