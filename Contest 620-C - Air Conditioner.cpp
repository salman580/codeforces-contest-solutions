#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll cust,temp;
        cin>>cust>>temp;
        ll low=temp,high=temp;
        ll i,j,k;
        ll time2=0;
        bool y=true;
        ll time,low1,high1,time1;
        for(i=0;i<cust;i++){
            //cout<<"low="<<low<<" "<<"high="<<high<<endl;
            cin>>time1>>low1>>high1;
            time=time1-time2;
            time2=time1;
            low=low-time;
            high=high+time;
            //cout<<"low ="<<low<<" "<<"high ="<<high<<endl;
            if((low1<low&&high1<low||high1>high&&high<low1)&&y){
                y=false;
            }
            if(low1>low){
                low=low1;
            }
            if(high1<high){
                high=high1;
            }
        }
        if(y==false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
