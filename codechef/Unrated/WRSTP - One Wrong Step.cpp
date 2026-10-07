#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int x = 0, y = 0;

        for (char c : s) {
            if (c == 'U') y++;
            else if (c == 'D') y--;
            else if (c == 'L') x--;
            else x++;
        }

        if ((abs(x) == 2 && y == 0) ||
            (abs(y) == 2 && x == 0))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}