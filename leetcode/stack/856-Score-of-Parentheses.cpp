class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int count = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(count);
                count = 0;
            } else {
                if (s[i - 1] == '(') {
                    count = (st.top() + 1);
                } else {
                    count = st.top() + (2 * count);
                }
                st.pop();
            }
        }
        return count;
    }
};