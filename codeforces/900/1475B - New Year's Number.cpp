#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2020 == 0 || n % 2021 == 0) std::cout << "YES" << std::endl;
        else {
            bool ok = false;

            for (int k = 1; 2020 * k <= n; k++) {
                int b = n - 2020 * k;

                if (0 <= b && b <= k) {
                    ok = true;
                    break;
                }
            }

            cout << (ok ? "YES" : "NO") << '\n';
        }
    }
}