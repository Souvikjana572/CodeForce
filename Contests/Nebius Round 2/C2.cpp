#include <bits/stdc++.h>
using namespace std;    
typedef long long ll;
ll n,k;
vector<ll>a,b;
void souvik(){
    cin>>n>>k;
    a.resize(n);
    b.resize(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
    vector<bool>m(k,1);
    for(ll i=k;i<n;i++) {
        if(a[i]!=a[i-k]){
            m[i%k]=0;
        }
    }
    bool p=1;
    for(ll i=0;i<n;i++){
        ll c=i%k;
        if(!m[c]&&b[i]!=-1&&b[i]!=a[i]){
            p=0;
        }
    }
    vector<ll>v(k,-1);
    for(ll i=0;i<n;i++){
        ll c=i%k;
        if(m[c]&&b[i]!=-1){
            if(v[c]!=-1&&v[c]!=b[i]){
                p=0;
            }
            v[c]=b[i];
        }
    }
    vector<ll>f(n+1,0);
    for(ll i=0;i<k;i++){
        if(m[i])f[a[i]]++;
    }
    for(ll i=0;i<k;i++){
        if(m[i]&&v[i]!=-1){
            f[v[i]]--;
            if(f[v[i]]<0)p=0;
        }
    }
    if(p)cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)souvik();
}