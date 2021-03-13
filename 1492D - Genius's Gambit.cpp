#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,k;
    cin>>a>>b>>k;
    //ll sum=abs((a+2)-b)+(b-2);
    if((b==1||a==0)&&k!=0){
        cout<<"No"<<endl;
    }
    else if(k>(a+b-2)&&k!=0){
        cout<<"No"<<endl;
    }
    else{
        string s,t;
        cout<<"Yes"<<endl;
        for(int i=0;i<b;i++){
            cout<<1;
        }
        for(int i=0;i<a;i++){
            cout<<0;
        }
        cout<<endl;
        if(k<=a){
            for(int i=0;i<b-1;i++){
                cout<<1;
            }
            for(int i=0;i<a+1;i++){
                if(i==k){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
        else{
            for(int i=0;i<b;i++){
                if(i+1==b-(k-a)){
                    cout<<0;
                }
                else{
                    cout<<1;
                }
            }
            for(int i=0;i<a;i++){
                if(i==a-1){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
        cout<<endl;
    }
}
