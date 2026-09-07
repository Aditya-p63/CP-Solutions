#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main() {
	// your code goes here
    ll n;
    std::cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    ll m;
    cin>>m;
    for(int i = 0; i < n; i++) {
        arr[i] = arr[i]>>m;
        std::cout <<  arr[i]<<" ";
    }
    std::cout << std::endl;
}
