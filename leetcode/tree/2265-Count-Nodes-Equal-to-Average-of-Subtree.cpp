class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == NULL)
            return 0;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }

    int sumNodes(TreeNode* root) {
        if (root == NULL)
            return 0;

        return root->val + sumNodes(root->left) + sumNodes(root->right);
    }

    int averageOfSubtree(TreeNode* root) {
        if (root == NULL)
            return 0;

        int n = countNodes(root);
        int sum = sumNodes(root);

        int ans = 0;

        if (sum / n == root->val)
            ans++;

        ans += averageOfSubtree(root->left);
        ans += averageOfSubtree(root->right);

        return ans;
    }
};