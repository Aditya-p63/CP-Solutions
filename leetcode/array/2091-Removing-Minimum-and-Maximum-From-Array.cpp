class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int midx = -1 , mdx = -1 , el1 = INT_MIN , el2 = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]<el2){
                el2 = nums[i];
                midx = i;
            }
            if(nums[i]>el1){
                el1 = nums[i];
                mdx = i;
            }
        }
        if(n == 1 ) return 1;
        int m = max(mdx+1,midx+1) , p = (n-midx)+(mdx+1) ,  q = (n-mdx)+(midx+1) , r = min(mdx,midx) ;
        r = n-r;
        p = min(p,q);
        p = min(p,r);
        return min(m,p);
    }
};