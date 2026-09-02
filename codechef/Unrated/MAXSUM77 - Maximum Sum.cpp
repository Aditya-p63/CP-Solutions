#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        std::vector < int > arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        // std::sort(arr.begin(), arr.end());
        int i = 0, j = n - 1 - k;
        int ans = 0, total = 0;
        for (int x = i; x <= j; x++) {
            total += arr[x];
        }
        ans = total;
        while (j + 1 < n) {
            total -= arr[i];
            i++;
            j++;
            total += arr[j];
            ans = max(ans, total);
        }
        std::cout << ans << std::endl;
    }
}