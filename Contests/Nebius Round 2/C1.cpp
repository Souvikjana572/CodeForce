//Nebius Round 2 (Codeforces Round 1088, Div. 1 + Div. 2)
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
    multiset<ll>s;
    for(ll i=0;i<k;i++){
        s.insert(a[i]);
    }
    for(ll i=0;i<k;i++){
        if(b[i]!=-1){
            auto x=s.find(b[i]);
            if(x==s.end()){
                cout<<"NO"<<endl;
                return;
            }
            s.erase(x);
        }
    }
    for(ll i=1;i+k-1<n;i++){
        if(b[i-1]==-1){
            auto x=s.find(a[i-1]);
            if(x==s.end()){
                cout<<"NO"<<endl;
                return;
            }
            s.erase(x);
        }
        else{
            if(b[i-1]!=a[i-1]){
                cout<<"NO"<<endl;
                return;
            }
        }
        ll y=i+k-1;
        if(b[y]==-1){
            s.insert(a[y]);
        }
        else{
            if(b[y]!=a[y]){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)souvik();
}