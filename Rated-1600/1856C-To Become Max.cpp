// rating -> 1600
// https://codeforces.com/problemset/problem/1856/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k;
vector<ll>a;
bool f(ll mid){
    for(ll i=1;i<=n;i++){
        ll x=0;
        for(ll j=i;j<=n;j++){
            if(a[j]<mid-j+i)x+=mid-j+i-a[j];
            else if(x<=k)return 1;
        }
    }
    return 0;
}
void souvik(){
    cin>>n>>k;
    a.resize(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    ll l=1,r=2e8;
    while(l<r){
        ll mid=l+r+1>>1;
        if(f(mid))l=mid;
        else r=mid-1;
    }
    cout<<l<<endl;
}
int main(){
	int t;
    cin>>t;
    while(t--)souvik();
}
