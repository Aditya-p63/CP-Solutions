#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    std::cin >> t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        int ans1 = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i]<=arr[j]){
                    ans1 = std::max(ans1, arr[i]+arr[j]);
                }
            }
        }
        for(int i = 0; i < n; i++) ans1 = max(ans1,arr[i]);
        std::cout << ans1 << std::endl;
    }
}
