//author-souvik
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
vector<ll>a,b;
ll lcm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}
void souvik(){
    cin>>n;
    a.resize(n);
    b.resize(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll x=0;
        if(i==0)x=__gcd(a[0],a[1]);
        else if(i==n-1)x=__gcd(a[n-2],a[n-1]);
        else x=lcm(__gcd(a[i-1],a[i]),__gcd(a[i],a[i+1]));
        if(x<a[i])ans++;
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)souvik();
}