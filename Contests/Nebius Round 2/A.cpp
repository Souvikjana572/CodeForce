//Nebius Round 2 (Codeforces Round 1088, Div. 1 + Div. 2)
#include <bits/stdc++.h>
using namespace std;    
typedef long long ll;
ll n;
void souvik(){
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    if(n==1){
        cout<<1<<endl;
    }else{
        for(int i=0;i<n;i++) {
            cout<<2<<(i==n-1?"":" ");
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)souvik();
}