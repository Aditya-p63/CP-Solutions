#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int po = 0, nev = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 1) po++;
            else nev++;
        }
        if (n % 2 == 1) std::cout << -1 << std::endl;
        else {
            if (po == nev) std::cout << 0 << std::endl;
            else {
                if (po > nev) {
                    po -= nev;
                    std::cout << po/2 << std::endl;
                }
                else {
                    nev -= po;
                    std::cout << nev/2 << std::endl;
                }
            }
        }
    }
}