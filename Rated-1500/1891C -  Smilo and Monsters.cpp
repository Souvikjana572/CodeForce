// rating -> 1500
//https://codeforces.com/problemset/problem/1891/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,sum,k,i;
vector<ll>a;
void souvik(){
    cin>>n;
    sum=0,k=0;
    a.resize(n);
    for(i=0;i<n;i++)cin>>a[i],sum+=a[i];
    sort(a.begin(),a.end());
    for(i=0;i<n;i++){
        k+=a[i];
        if(k>(sum+1)/2){
          break;
        }
    }
    cout<<(sum+1)/2+n-i<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)souvik();
}