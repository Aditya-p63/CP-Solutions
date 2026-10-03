class Solution {
public:
    int longestValidParentheses(string s) {
        int c1 = 0, ans = 0, c2 = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(')
                c1++;
            else
                c2++;
            if (c1 == c2) {
                ans = max(c1 + c2, ans);
            } else if (c2 > c1) {
                c1 = c2 = 0;
            }
        }
        c1 = c2 = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '(')
                c1++;
            else
                c2++;
            if (c1 == c2) {
                ans = max(c1 + c2, ans);
            } else if (c1 > c2) {
                c1 = c2 = 0;
            }
        }
        return ans;
    }
};