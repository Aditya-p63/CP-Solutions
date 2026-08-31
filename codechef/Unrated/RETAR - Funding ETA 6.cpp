#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int x , a, y, b, d;
    std::cin >> x >>a>>y>>b>>d;
    int t = (x*a)+(y*b);
    if(t>=d) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
}
