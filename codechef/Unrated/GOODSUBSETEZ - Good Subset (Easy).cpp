#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int cnt[31] = {};

        for (int i = 0; i < N; i++) {
            ll x;
            cin >> x;

            int highestBit = 63 - __builtin_clzll(x);
            cnt[highestBit]++;
        }

        int ans = 0;

        for (int i = 0; i < 31; i++) {
            ans = max(ans, cnt[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}