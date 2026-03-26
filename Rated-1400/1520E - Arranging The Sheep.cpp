//rating -1400
//https://codeforces.com/problemset/problem/1520/E

#include <bits/stdc++.h>
using namespace std;
void souvik(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>arr;
    for(int i=0;i<n;i++)if(s[i]=='*')arr.push_back(i);
    int d=arr.size()/2;
    long long ans=0;
    for(int i=0;i<arr.size();i++){
        ans+=abs(arr[d]-arr[i]-d+i);
    }
    cout<<ans<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--)souvik();
}