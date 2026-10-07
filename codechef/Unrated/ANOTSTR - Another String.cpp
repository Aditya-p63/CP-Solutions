#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a, b;
        cin >> a >> b;
        int c1 = 0 , c2 = 0 , c3 = 0 , c4 = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == '1')
                c1++;

            if (b[i] == '1')
                c2++;
        }
        if((c1%2) ==(c2%2)) std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }
    
}