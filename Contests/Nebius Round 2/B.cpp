//Nebius Round 2 (Codeforces Round 1088, Div. 1 + Div. 2)
#include <bits/stdc++.h>
using namespace std;    
typedef long long ll;
int mod=676767677;
int x,y;
int f(int n){
    int r=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            r++;
            if(i*i!=n)r++;
        }
    }
    return r%mod;
}
void souvik(){
    cin>>x>>y;
    if(x==y){
        cout<<1<<endl;
        for(int i=0;i<y;i++)cout<<"-1 ";
        for(int i=0;i<x;i++)cout<<"1 ";
    }
    else if(y<x){
        cout<<f(x-y)<<endl;
        for(int i=0;i<y;i++)cout<<"-1 ";
        for(int i=0;i<x;i++)cout<<"1 ";
    }
    else{
        cout<<f(y-x)<<endl;
        for(int i=0;i<x;i++)cout<<"1 ";
        for(int i=0;i<y;i++)cout<<"-1 ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)souvik();
}