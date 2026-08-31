#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    std::cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    int x;
    cin>>x;
    int idx = -1 , count = 0 , ans = -1;
    for(int i = 0; i < n; i++){
        if(arr[i]==x && count==1){
            ans = i;
            count++;
        }
        else if(arr[i]==x && count==0) {
            count++;
            ans = -2;
        }
    }
    std::cout << ans << std::endl;
}
