class Solution {
public:
    int findCircleNum(vector<vector<int>>& edges) {
        int V = edges.size();
        vector<int> vis(V, 0);
        int count = 0;

        vector<vector<int>> adj(V);

        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (edges[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                }
            }
        }
        for (int i = 0; i < V; i++) {
            if (vis[i] != 1) {
                count++;
                queue<int> q;
                q.push(i);
                vis[i] = 1;
                while (q.size() > 0) {
                    int node = q.front();
                    q.pop();
                    for (auto it : adj[node]) {
                        if (vis[it] != 1) {
                            vis[it] = 1;
                            q.push(it);
                        }
                    }
                }
            }
        }
        return count;
    }
};