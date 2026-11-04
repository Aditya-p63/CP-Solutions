class Solution {
public:
    int numIslands(vector<vector<char>>& adj) {
        int n = adj.size(), m = adj[0].size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (adj[i][j] == '1') {
                    count++;
                    adj[i][j] = '0';
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    while (q.size() > 0) {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();

                        int dx[4] = {-1, 0, 1, 0};
                        int dy[4] = {0, 1, 0, -1};

                        for (int i = 0; i < 4; i++) {
                            int drow = x + dx[i];
                            int dcol = y + dy[i];
                            if (drow >= 0 && drow < n && dcol >= 0 &&
                                dcol < m && adj[drow][dcol]=='1') {
                                    adj[drow][dcol]='0';
                                    q.push({drow,dcol});
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};