#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        bool flag = false;
        if (2 * b > c && (2 * b - c) % a == 0) flag = true;
        if ((a + c) % (2 * b) == 0) flag = true;
        if (2 * b > a && (2 * b - a) % c == 0) flag = true;
        if (flag == true) std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }
}