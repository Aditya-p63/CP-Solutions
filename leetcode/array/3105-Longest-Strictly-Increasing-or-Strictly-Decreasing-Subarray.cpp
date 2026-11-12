class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 1, ans = 1, count = 1;

        while (j < n) {
            if (nums[i] < nums[j]) {
                count++;
            } else {
                ans = max(ans, count);
                count = 1;
            }

            i = j;
            j++;
        }
        ans = max(ans, count);

        count = 1;
        i = 0;
        j = 1;
        int ans1 = 1;

        while (j < n) {
            if (nums[i] > nums[j]) {
                count++;
            } else {
                ans1 = max(ans1, count);
                count = 1;
            }

            i = j;
            j++;
        }
        ans1 = max(ans1, count);

        return max(ans, ans1);
    }
};