class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<int>& vis, int start) {
        vis[start] = 1;
        for (auto it : adj[start]) {
            if (vis[it] != 1) {
                dfs(adj, vis, it);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& edges) {
        int V = edges.size();
        vector<int> vis(V, 0);
        vector<vector<int>> adj(V);

       for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (edges[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                }
            }
        }
        int count = 0;
        for (int i = 0; i < V; i++) {
            if (vis[i] != 1) {
                count++;
                dfs(adj, vis, i);
            }
        }
        return count;
    }
};