#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
void souvik(){
    cin>>n;
    cout<<((n % 2 == 0 && (n / 2) % 2 == 1) ? "NO" : "YES")<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)souvik();

    return 0;
}
