#include <bits/stdc++.h>
using namespace std;
#define ii pair<ll, ll>
typedef long long ll;
const int N=505;
int w[N][N]={};
int n;
int ans[N*N]={};
vector<int> parent(N*N);
int check(int x)
{
    if(parent[x]==x) {
        return x;
    }
    if(parent[x]!=x) return (check(parent[x]));
}
void solve()
{
    cin>>n;
    for(int i=0;i<(N*N);i++){
        parent[i]=i;
    }
    vector<pair<int, ii> > v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>w[i][j];
            if(i==j){
                ans[i]=w[i][j];
            }
            if(i<j){
                v.push_back({w[i][j],{i,j}});
            }
        }
    }
    sort(v.begin(),v.end());
    int un=n;
    vector<ii> graph;
    for(int i=0;i<v.size();i++){
        auto temp=v[i];
        //cout<<temp.second.first<<" "<<temp.second.second<<endl;
        int a=check(temp.second.first); int b=check(temp.second.second);
        //cout<<endl;
        //cout<<a<<" "<<b<<endl;
        //cout<<ans[a]<<" "<<ans[b]<<endl;
        if(a==b) continue;
 
        if(max(ans[a],ans[b])==temp.first){
            if(ans[a]>ans[b]){
                parent[b]=a;
                graph.push_back({b,a});
            }
            else{
                parent[a]=b;
                graph.push_back({a,b});
            }
            continue;
        }
        parent[a]=un;
        parent[b]=un;
        graph.push_back({a,un});
        graph.push_back({b,un});
        ans[un]=temp.first;
        un++;
    }
    cout<<un<<endl;
    for(int i=0;i<un;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    int father=check(0);
    cout<<father+1<<endl;
    for(int i=0;i<father;i++){
        cout<<graph[i].first+1<<" "<<graph[i].second+1<<endl;
    }
}
 
int main()
{
    int testcases=1;
    while(testcases--){
        solve();
    }
    return 0;
}
