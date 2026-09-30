#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    std::cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        std::vector < bool > a(n + 1, false);
        for (int i = 0; i < m; i++) {
            a[arr[i]] = true;
        }
        for (int i = 1; i <= n; i++) {
            if(a[i]==false && k > 0) {
                std::cout << i <<" ";
                k--;
            } 
        }
        std::cout<< std::endl;

    }
}