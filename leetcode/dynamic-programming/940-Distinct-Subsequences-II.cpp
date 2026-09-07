class Solution {
public:
    int M = 1e9 + 7;
    int dp[2001];
    vector<int> prev;
    
    int distinctSubseqII(string s) {
        int n = s.length();
        memset(dp, -1, sizeof(dp));
        vector<int> ls(26, 0);
        prev.assign(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            int idx = s[i - 1] - 'a';
            prev[i] = ls[idx];
            ls[idx] = i;
        }
        dp[0] =1;
        for(int i = 1; i <= n; i++){
            int t = (2*dp[i-1])%M;
            if(prev[i]!=0){
                int d = dp[prev[i]-1];
                t = (t-d+M)%M;
            }
            dp[i] = t;
        }
        return (dp[n] - 1 + M) % M;
    }
};