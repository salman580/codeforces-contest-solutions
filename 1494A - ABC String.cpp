#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int a[n];
        bool b[50];
        memset(b,false,sizeof(b));
        if(s[0]-'A'==s[n-1]-'A'){
            cout<<"NO"<<endl;
            continue;
        }
        int x=count(s.begin(),s.end(),s[0]);
        int y=count(s.begin(),s.end(),s[n-1]);
        for(int i=0;i<n;i++){
            a[i]=s[i]-'A';
            //cout<<a[i]<<endl;
        }
        if(n/2<=x){
            for(int i=0;i<n;i++){
                if(a[i]!=a[0]){
                    a[i]=a[n-1];
                }
                //cout<<a[i]<<endl;
            }
        }
        if(n/2<=y){
            for(int i=0;i<n;i++){
                if(a[i]!=a[n-1]){
                    a[i]=a[0];
                }
                //cout<<a[i]<<endl;
            }
        }
        if(count(a,a+n,a[0])!=count(a,a+n,a[n-1])){
            cout<<"NO"<<endl;
            continue;
        }
        bool p=true;
        for(int i=0;i<n;i++){
            if(b[i]==false&&a[i]==a[0]){
                b[i]=true;
                for(int j=i+1;j<n;j++){
                    if(a[i]!=a[j]&&b[j]==false){
                        b[j]=true;
                        break;
                    }
                }
            }
            else if(b[i]==false&&a[i]!=a[0]){
                //cout<<s[i]<<" "<<i<<endl;
                p=false;
            }
        }
        if(p){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
