#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int beauty = 0;

        for (int i = 0; i + 1 < n; i++) {
            beauty += (s[i] == s[i + 1]);
        }

        int ans = beauty;

        int best[2][2];

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                best[i][j] = -1000000;

        for (int r = 1; r < n - 1; r++) {
            int a = s[r - 1] - '0';
            int b = s[r] - '0';

            best[a][b] = max(best[a][b], -(a == b));

            int c = s[r] - '0';
            int d = s[r + 1] - '0';

            for (int x = 0; x < 2; x++) {
                for (int y = 0; y < 2; y++) {
                    if (best[x][y] < -10)
                        continue;

                    int old = (x == y) + (c == d);
                    int nw = (x == c) + (y == d);

                    ans = max(ans, beauty + nw - old);
                }
            }
        }

        for (int r = 0; r + 1 < n; r++) {
            int gain =
                (s[0] == s[r + 1]) -
                (s[r] == s[r + 1]);

            ans = max(ans, beauty + gain);
        }

        for (int l = 1; l < n; l++) {
            int gain =
                (s[l - 1] == s[n - 1]) -
                (s[l - 1] == s[l]);

            ans = max(ans, beauty + gain);
        }

        cout << ans << endl;
    }

    return 0;
}