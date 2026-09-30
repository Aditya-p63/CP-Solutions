class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        int n = s.size(), d = 0;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                d++;
                arr[i] = (d % 2 == 0) ? 0 : 1;
            } else {
                arr[i] = (d % 2 == 0) ? 0 : 1;
                d--;
            }
        }
        return arr;
    }
};