#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        for (int d = 1; ; d++) {
            bool ok = false;

            for (int k = 1; k <= d; k++) {
                ll s = (ll)k * (k + 1) * (2 * k + 1) / 6;
                ll p = (ll)y * (s + (ll)(d - k) * k * k) - (ll)k * x;

                if (p > 0) {
                    ok = true;
                    break;
                }
            }

            if (ok) {
                cout << d << '\n';
                break;
            }
        }
    }
}