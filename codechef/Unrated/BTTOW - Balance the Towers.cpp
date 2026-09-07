#include <bits/stdc++.h>

using namespace std;

using ll = long long int;
int main() {
    // your code goes here
    ll n, k;
    std::cin >> n >> k;
    std::vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    std::sort(arr.begin(), arr.end());
    ll ans = arr[n - 1] - arr[0];
    if (n == 1) {
        std::cout << 0 << std::endl;
        return 0;
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < k) continue;
        ll m = std::min(arr[i + 1] - k, arr[0] + k);
        ll newMax = max(arr[i] + k, arr[n - 1] - k);
        ans = min(ans, newMax - m);
    }
    std::cout << ans << std::endl;
}