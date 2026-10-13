class Solution {
public:
    long long maxAlternatingSum(vector<int>& v) {
        for (int &x : v) {
            if(x<0) x = x *(-1);
        }
        sort(v.begin(),v.end());
        int n = v.size();
        int i = 0 , j = n-1;
        long long int ans = 0 , count = 0;
        while(i<=j){
            if(count%2==0){
                int x = v[i] , y = v[j];
                ans+=(y*y);
                j--;
            }
            else{
                int y = v[i];
                ans-=(y*y);
                i++;
            }
            count++;
        }
        return ans;
    }
};