#include <bits/stdc++.h>

using namespace std;
using ll = long long int;
int main() {
    // your code goes here
    int t;
    std::cin >> t;
    while (t--) {
        int a, b, p, q, r;
        cin >> a >> b >> p >> q >> r;
        int x = 0, y = 0;
        if (a == 0 && b == 0) std::cout << 0 << std::endl;
        else {
            vector < vector < int >> dp(a + 1, vector < int > (b + 1, 1e9));

            dp[0][0] = 0;

            for (int x = 0; x <= a; x++) {
                for (int y = 0; y <= b; y++) {
                    if (x + 1 <= a)
                        dp[x + 1][y] = min(dp[x + 1][y], dp[x][y] + p);

                    if (x + 2 <= a)
                        dp[x + 2][y] = min(dp[x + 2][y], dp[x][y] + p);

                    if (y + 1 <= b)
                        dp[x][y + 1] = min(dp[x][y + 1], dp[x][y] + q);

                    if (y + 2 <= b)
                        dp[x][y + 2] = min(dp[x][y + 2], dp[x][y] + q);

                    if (x + 1 <= a && y + 1 <= b)
                        dp[x + 1][y + 1] =
                        min(dp[x + 1][y + 1], dp[x][y] + r);
                }
            }

            cout << dp[a][b] <<endl;
        }
    }
}