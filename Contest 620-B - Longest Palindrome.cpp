#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t>>n;
    string ch[t],ch3="";
    string ch2;
    string ch4="";
    int i,j,k,l=0;
    for(i=0;i<t;i++)
    {
        cin>>ch[i];
    }
    bool y=true;
    for(i=0;i<t;i++)
    {
        for(j=i;j<t;j++)
        {
            ch2=ch[j];
            reverse(ch2.begin(),ch2.end());
            if(j==i&&ch2==ch[i]&&y){
                ch4+=ch[i];
                y=false;
            }
            else if(ch2==ch[i]&&j!=i){
                ch3+=ch[i];
            }
        }
    }
    cout<<ch3.size()*2+ch4.size()<<endl;
    if(ch3.size()*2+ch4.size()==0){
        return 0;
    }
    cout<<ch3<<ch4;
    reverse(ch3.begin(),ch3.end());
    cout<<ch3<<endl;

}
