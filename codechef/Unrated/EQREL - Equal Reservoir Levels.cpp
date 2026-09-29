#include<bits/stdc++.h>

using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
using ll = long long int;
int main() {
    fast
    int n;
    cin >> n;
    int arr[n], mi = INT_MAX ;
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mi = std::min(mi, arr[i]);
    }
    for (int i = 0; i < n; i++) {
        cnt+=(arr[i]-mi);
    }
    std::cout << cnt << std::endl;
    
}