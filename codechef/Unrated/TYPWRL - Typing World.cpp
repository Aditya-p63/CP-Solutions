#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s, l;
        cin >> s >> l;

        set<char> st(l.begin(), l.end());

        int curr = 1, ans = 1;

        for (int i = 1; i < n; i++) {
            if (st.count(s[i]) == st.count(s[i - 1]))
                curr++;
            else
                curr = 1;

            ans = max(ans, curr);
        }

        cout << ans << endl;
    }

    return 0;
}