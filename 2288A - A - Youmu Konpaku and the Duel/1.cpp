#include <bits/stdc++.h>
using namespace std;

long long maxDamage(long long charges, long long attacks) {
    if (attacks <= charges + 1) {
        return attacks * (2 * charges + 3 - attacks) / 2;
    }
    return charges * (charges + 1) / 2 + attacks;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;

        for (long long moves = 1;; moves++) {
            bool defeated = false;
            for (long long charges = 0; charges <= moves; ++charges) {
                long long attacks = moves - charges;
                if (maxDamage(charges, attacks) >= x) {
                    cout << moves << '\n';
                    defeated = true;
                    break;
                }
            }
            if (defeated) {
                break;
            }
        }
    }

    return 0;
}
