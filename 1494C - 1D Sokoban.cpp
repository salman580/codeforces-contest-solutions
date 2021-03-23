#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx=1e5+1;
ll sakoban(ll n_array[],ll m_array[],ll nl,ll ml)
{
    ll dist=0,count=0,arr_index[nl],j=0;
    for(int i=0;i<nl;i++){
        if(binary_search(m_array,m_array+ml,n_array[i])){
            arr_index[j]=n_array[i];
            j++;
        }
    }
    ll ifound=j,sum=0;
    for(int i=0;i<ml;i++){
        ll temp=-1;
        while(temp!=dist){
            temp=dist;
            dist=upper_bound(n_array,n_array+nl,m_array[i]+dist)-n_array;
        }
        ll ndist=upper_bound(arr_index,arr_index+ifound,m_array[i]+dist-1)-arr_index;
        ll mdist=upper_bound(m_array,m_array+ml,m_array[i]+dist-1)-m_array;
        ll found=(ifound-ndist)+(mdist-i);
        if(found>sum){
            sum=found;
        }
    }
    return sum;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll pos_array_n[n],neg_array_n[n],pos_array_m[m],neg_array_m[m];
        ll j=0,k=0,x;
        ll check1[n],check2[m];
        for(int i=0;i<n;i++){
            cin>>x;
            check1[i]=x;
            if(x>0){
                pos_array_n[j]=x;
                j++;
            }
            else{
                neg_array_n[k]=x;
                k++;
            }
        }
        ll pos_array_nl=j,neg_array_nl=k;
        j=0;k=0;
        for(int i=0;i<m;i++){
            cin>>x;
            check2[i]=x;
            if(x>0){
                pos_array_m[j]=x;
                j++;
            }
            else{
                neg_array_m[k]=x;
                k++;
            }
        }
        /*if(t==62){
            cout<<n;
            for(int i=0;i<n;i++){
                cout<<check1[i];
            }
            cout<<m;
            for(int i=0;i<m;i++){
                cout<<check2[i];
            }
        }*/
        ll neg_array_ml=k,pos_array_ml=j,sum1;
        sum1=sakoban(pos_array_n,pos_array_m,pos_array_nl,pos_array_ml);
        for(int i=0;i<neg_array_nl;i++){
            neg_array_n[i]*=-1;
        }
        for(int i=0;i<neg_array_ml;i++){
            neg_array_m[i]*=-1;
        }
        sort(neg_array_m,neg_array_m+neg_array_ml);
        sort(neg_array_n,neg_array_n+neg_array_nl);
        //cout<<sum1<<endl;
        ll sum2=sakoban(neg_array_n,neg_array_m,neg_array_nl,neg_array_ml);
        //cout<<sum2<<endl;
        cout<<sum1+sum2<<endl;
 
 
    }
}
