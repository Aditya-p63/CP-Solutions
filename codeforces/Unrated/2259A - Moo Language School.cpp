#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    std::cin >> t;
    while(t--){
        int n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i  = 0 , m = s.size() , count = 0;
        while(i<m){
            int p = k;
            bool flag = false;
            while(p--){
                if(s[i]=='0') flag = true;
                i++;
            }
            if(flag==false) count++;
        }
        std::cout << count << std::endl;
    }
}
