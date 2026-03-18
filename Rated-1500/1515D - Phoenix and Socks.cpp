// rating -> 1500
//https://codeforces.com/problemset/problem/1515/D
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,l,r,x;
void souvik(){
    ll ans=0;
   cin>>n>>l>>r;
   unordered_map<ll,ll>ml,mr;
   for(int i=0;i<l;i++){
    cin>>x;
    ml[x]++;
   }
   for(int i=0;i<r;i++){
    cin>>x;
    if(ml[x]>0)ml[x]--;
    else mr[x]++;
   }
   ll lp=0,rp=0;
   ll left=0,right=0;
   for(auto i:ml){
    if(i.second)
    left+=i.second,lp+=i.second/2;
   }
   for(auto i:mr){
    if(i.second)
    right+=i.second,rp+=i.second/2;
   }
   ans+=min(left,right);
   left-=ans;
   right-=ans;
   if(left){
    if(lp>=left/2)ans+=left/2;
    else ans+=lp+(left-2*lp);
   }
   if(right){
    if(rp>=right/2)ans+=right/2;
    else ans+=rp+(right-2*rp);
   }
   cout<<ans<<endl;
}
int main(){
	int t;
    cin>>t;
    while(t--)souvik();
}
