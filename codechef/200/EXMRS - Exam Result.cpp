#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int c, m, w, p, r;
    std::cin >> c >> m >> w >> p >> r;
    int sum = (c*m) - (w*p);
    if(sum>=r) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;

}