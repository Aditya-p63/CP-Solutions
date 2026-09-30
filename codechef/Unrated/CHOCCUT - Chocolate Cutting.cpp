#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    std::cin >> t;
    while(t--){
        int n , m;
        cin>>n>>m;
        if((n*m)%2==0) std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }
}
