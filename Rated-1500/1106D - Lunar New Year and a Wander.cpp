// rating -> 1500
//https://codeforces.com/problemset/problem/1106/D
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;  
ll n,m,u,v;
void souvik(){
    cin>>n>>m;
    vector<ll>adj[n+1];
    vector<bool>vis(n+1,0);
    for(ll i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    vector<ll>ans;
    pq.push(1);
    while(!pq.empty()){
        ll node=pq.top();
        pq.pop();
        if(vis[node])continue;
        vis[node]=1;
        ans.push_back(node);
        for(ll i=0;i<adj[node].size();i++){
            if(!vis[adj[node][i]])pq.push(adj[node][i]);
        }
    }
    for(ll i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    cout<<endl;
}
int main(){
    souvik();
}