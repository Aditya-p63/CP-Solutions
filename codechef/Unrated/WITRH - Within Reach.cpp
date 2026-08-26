#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x , y, k;
    std::cin >> x>>y>>k;
    int a = abs(x-y);
    if(a<=k) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
}
