class Solution {
    int m, n;
    vector<vector<vector<bool>>> t;

public:
    bool hasValidPath(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();

        if ((m + n - 1) % 2 == 1)
            return false;

        if (grid[0][0] != '(' || grid[m - 1][n - 1] != ')')
            return false;

        t = vector<vector<vector<bool>>>(
            m, vector<vector<bool>>(n, vector<bool>(201, false))
        );

        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {

                for (int openCount = 0; openCount <= i + j + 1; openCount++) {

                    if (i == m - 1 && j == n - 1) {
                        t[i][j][openCount] = (openCount == 0);
                        continue;
                    }

                    t[i][j][openCount] = false;

                    // Move down
                    if (i + 1 < m) {
                        int newOpCount =
                            (grid[i + 1][j] == '(')
                                ? openCount + 1
                                : openCount - 1;

                        if (newOpCount >= 0 &&
                            t[i + 1][j][newOpCount]) {
                            t[i][j][openCount] = true;
                        }
                    }

                    // Move right
                    if (j + 1 < n) {
                        int newOpCount =
                            (grid[i][j + 1] == '(')
                                ? openCount + 1
                                : openCount - 1;

                        if (newOpCount >= 0 &&
                            t[i][j + 1][newOpCount]) {
                            t[i][j][openCount] = true;
                        }
                    }
                }
            }
        }

        return t[0][0][1];
    }
};
