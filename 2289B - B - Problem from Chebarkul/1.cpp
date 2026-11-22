#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k;
vector<ll>a;
void souvik(){
    cin>>n>>k;
    a.resize(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll len=n-k+1;
    vector<ll>p(n,0);
    for(ll i=1;i<n;i++){
        p[i]=p[i-1]+(a[i]!=a[i-1]);
    }
    ll ans=0;
    for(ll i=0;i<k;i++){
        ll l=i;
        ll r=i+len-1;
        ll x=p[r]-p[l];
        if(x==0){
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)souvik();

    return 0;
}
