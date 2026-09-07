#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
int main() {
	// your code goes here
    ll n , k;
    std::cin >> n>>k;
    ll arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if((arr[i]>(2*k))  && i%2==0) ans+=arr[i];
    }
    std::cout << ans << std::endl;
}
