#include <bits/stdc++.h>
using namespace std;

#define ll long long int

const ll MOD = 998244353;

ll power(ll a, ll b) {
    ll ans = 1;

    while (b > 0) {
        if (b & 1)
            ans = ans * a % MOD;

        a = a * a % MOD;
        b >>= 1;
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll T;
    cin >> T;

    while (T--) {
        ll N, K;
        cin >> N >> K;

        for (ll i = 0; i < N; i++) {
            ll x;
            cin >> x;
        }

        ll fact = 1;

        for (ll i = 1; i <= K; i++) {
            fact = fact * i % MOD;
        }

        ll ways = power(K, N - K);

        ll answer = fact * ways % MOD;

        cout << answer << '\n';
    }

    return 0;
}