#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> adj(n + 1);

        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        ll total = 1LL * n * (n - 1) * (n - 2) / 6;
        ll bad = 0;

        for (int i = 1; i <= n; i++) {
            if (adj[i].size() == 1)
                bad += n - 2;
        }

        for (int i = 1; i <= n; i++) {
            int cnt = 0;

            for (int v : adj[i]) {
                if (adj[v].size() == 1)
                    cnt++;
            }

            bad -= 1LL * cnt * (cnt - 1) / 2;
        }

        for (int i = 1; i <= n; i++) {
            if (adj[i].size() == 2) {
                int u = adj[i][0];
                int v = adj[i][1];

                if (adj[u].size() != 1 && adj[v].size() != 1)
                    bad++;
            }
        }

        cout << total - bad << '\n';
    }

    return 0;
}