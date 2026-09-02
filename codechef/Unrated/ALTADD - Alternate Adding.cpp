#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long operations = 0;
        long long prev = 0;

        for (int i = 1; i <= N; i++) {
            long long x;
            cin >> x;

            if (i % 2 == 0)
                x = -x;

            if (i == 1)
                operations += abs(x);
            else
                operations += abs(x - prev);

            prev = x;
        }

        operations += abs(prev);

        cout << operations / 2 << '\n';
    }

    return 0;
}