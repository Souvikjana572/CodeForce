#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
vector<ll>a;
void souvik(){
    cin>>n;
    a.resize(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll>L(n),R(n);
    stack<ll>st;
    for(ll i=0;i<n;i++){
        while(!st.empty()&&a[st.top()]>a[i]){
            st.pop();
        }
        ll prev=st.empty()?-1:st.top();
        L[i]=i-prev-1;
        st.push(i);
    }

    while(!st.empty())st.pop();
    for(ll i=n-1;i>=0;i--){
        while(!st.empty()&&a[st.top()]>a[i])st.pop();
        ll k=st.empty()?n:st.top();
        R[i]=k-i-1;
        st.push(i);
    }

    ll ans=0;
    for(ll i=0;i<n;i++){
        if(L[i]==0||R[i]==0){
            ans+=L[i]+R[i]+1;
        }
        else ans+=2;
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
