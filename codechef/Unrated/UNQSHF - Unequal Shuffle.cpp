#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;
        int x = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 'a') x++;
            if (b[i] == 'a') x++;
        }
        cout << (x == n ? "YES\n" : "NO\n");
    }
}