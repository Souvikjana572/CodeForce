// rating -> 1600
// https://codeforces.com/problemset/problem/1833/E
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void souvik() {
    int n;
    cin >> n;
    vector<int> v(n), vis(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        v[i]--;
    }
    int single = 0, duo = 0;
    for (int i = 0; i < n; i++) {
        if (vis[i]) {
            continue;
        }
        int x = i;
        int prev = x;
        int prev2 = x;

        while (!vis[x]) {
            vis[x] = 1;
            int y = v[x];
            prev2 = prev;
            prev = x;
            x = y;
        }
        if (x == prev2) {
            duo++;
        } else if (x == i) {
            single++;
        }
    }
    cout<<single+!!duo <<" "<<single+duo<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        souvik();
    }
}
