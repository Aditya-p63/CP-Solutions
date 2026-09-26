class Solution {
public:
    string evaluate(string s, vector<vector<string>>& v) {
        unordered_map<string, string> mp;

        for (auto row : v) {
            mp[row[0]] = row[1];
        }
        int i = 0, n = s.size();
        string ans = "";
        while (i < n) {
            if (s[i] == '(') {
                i++;
                string t = "";
                while (i < n && s[i] != ')') {
                    t += s[i];
                    i++;
                }
                ans += (mp.count(t)) ? mp[t] : "?";
            } else {
                ans += s[i];
            }
            i++;
        }
        return ans;
    }
};