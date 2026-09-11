class Solution {
public:
    void solve(vector<int>& nums, vector<bool>& used, vector<int>& current,
               vector<vector<int>>& ans) {

        if (current.size() == 3) {
            if (current[2] % 2 == 0) {
                ans.push_back(current);
            }

            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (used[i])
                continue;

            if (current.empty() && nums[i] == 0)
                continue;

            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
                continue;

            used[i] = true;
            current.push_back(nums[i]);

            solve(nums, used, current, ans);

            current.pop_back();
            used[i] = false;
        }
    }
    
    int totalNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> current;
        vector<bool> used(nums.size(), false);

        solve(nums, used, current, ans);

        return ans.size();
    }
};