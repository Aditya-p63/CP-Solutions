#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        unordered_map < int, int > mp;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        
        int m = 0;
        for(auto x : mp){
            m  = std::max(m, x.second);
        }
        std::cout << (m+1)/2 << std::endl;
    }
}