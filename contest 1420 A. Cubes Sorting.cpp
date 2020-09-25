#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<"YES"<<endl;
        }
        if(n==2){
            if(a[0]>a[1]){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }

        else
        {
            bool y=false;
            for(int i=0;i<n-1;i++){
                if(a[i]<=a[i+1]){
                    y=true;
                    break;
                }
            }
            if(y){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
