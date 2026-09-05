#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    std::cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        if (s[0] != s[n - 1])
        {
            if (s[0] == 'a') s[0] = 'b';
            else s[0] = 'a';
        }
        std::cout << s << std::endl;
    }
}