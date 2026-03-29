//author-souvik
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
vector<ll>a;
void souvik(){
    cin>>n;
    a.resize(n);
    ll same=0,big=0,small=0;
    vector<ll>v(n+1,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        v[a[i]]=i+1;
    }
    ll x=0,ans=0;
    for(ll i=1;i<=n;i++){
        if(v[i]>=i)x++;
        ans=max(ans,x);
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)souvik();
}