class Solution {
	public:
	int f(vector<int> &arr, int k) {
		int ans = 0, stu = 1;
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i]+ans <= k) {
				ans = arr[i] + ans;
			}
			else { ans = arr[i];
			stu++; }
		}
		return stu;
	}
	int findPages(vector<int> &arr, int k) {
		// code here
		int maxi = *max_element(arr.begin(), arr.end());
		int sum = accumulate(arr.begin(), arr.end(), 0);
		int n = arr.size();
		if(k>n) return -1;
		for (int i = maxi; i <= sum; i++) {
			if (f(arr, i) <= k)
				return i;
		}
		return - 1;
	}
};
