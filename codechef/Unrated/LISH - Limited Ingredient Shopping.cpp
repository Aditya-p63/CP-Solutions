#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int w;
    std::cin >> w;
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    int sum = 0 , item = 0;
    std::sort(arr.rbegin(), arr.rend());
    for(int i = 0; i < n; i++) {
        sum+=arr[i];
        item++;
        if(sum>=w){
            std::cout << item << std::endl;
            return 0;
        }
        sum+=arr[i];
        item++;
        if(sum>=w){
            std::cout << item << std::endl;
            return 0;
        }
    }
    std::cout << -1 << std::endl;
    
}
