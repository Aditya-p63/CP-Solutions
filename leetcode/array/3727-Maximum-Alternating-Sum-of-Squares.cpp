class Solution {
public:
    long long maxAlternatingSum(vector<int>& v) {
        for (int &x : v) {
            x = abs(x);
            x = 1LL * x * x;
        }

        nth_element(v.begin(), v.begin() + v.size()/2, v.end());

        int n = v.size();

        long long first = accumulate(v.begin(), v.begin() + n/2, 0LL);
        long long second = accumulate(v.begin() + n/2, v.end(), 0LL);

        return second - first;
    }
};