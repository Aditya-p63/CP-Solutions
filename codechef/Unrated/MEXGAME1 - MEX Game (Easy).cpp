
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);
        vector<ll> cnt(102, 0);

        for (ll &x : a) {
            cin >> x;
            cnt[x]++;
        }

        ll mex = 0;
        while (cnt[mex] > 0)
            mex++;

        ll moves = 0;

        for (ll i = 0; i < mex; i++) {
            moves += (cnt[i] - 1) * i;
        }

        for (ll x = mex + 2; x <= 100; x++) {
            moves += cnt[x] * (x - mex - 1);
        }

        cout << (moves % 2 ? "Alice" : "Bob") << '\n';
    }

    return 0;
}

