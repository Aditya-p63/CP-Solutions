#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        map<int, int> freq;

        for (int i = 0; i < N; i++) {
            freq[A[i] - i]++;
        }

        int maxKeep = 0;

        for (auto p : freq) {
            maxKeep = max(maxKeep, p.second);
        }

        cout << N - maxKeep << '\n';
    }

    return 0;
}