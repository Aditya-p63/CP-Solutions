class Solution {
public:
    int sum = 0;
    pair<int, int> f(TreeNode* root) {
        if (root == NULL)
            return {0, 0};
        auto p1 = f(root->left);
        auto p2 = f(root->right);
        int total = p1.first + p2.first + root->val;
        int count = p2.second + p1.second + 1;
        int avg = total / count;
        if(avg == root->val) sum++;
        return {total , count};
    }
    int averageOfSubtree(TreeNode* root) {
        sum = 0;
        f(root);
        return sum;
    }
};