class Solution {
public:
    // Helper function to check if two trees are identical
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL)
            return p == q;

        return (p->val == q->val) &&
               isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // If subRoot is NULL, it's always a subtree
        if (subRoot == NULL)
            return true;

        // If root is NULL but subRoot isn't
        if (root == NULL)
            return false;

        // Check if trees match at current node
        if (isSameTree(root, subRoot))
            return true;

        // Otherwise check left or right subtree
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};
