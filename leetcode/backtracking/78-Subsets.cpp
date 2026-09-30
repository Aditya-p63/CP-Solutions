class Solution {
public:
    void f(vector<int>& nums, vector<vector<int>>& ans, int idx,
           vector<int> v) {
        if (idx == nums.size()) {
            ans.push_back(v);
            return;
        }
        f(nums, ans, idx + 1, v);
        v.push_back(nums[idx]);
        f(nums, ans, idx + 1, v);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        f(nums, ans, 0, v);
        return ans;
    }
};