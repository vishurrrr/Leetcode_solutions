/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int leftheight=height(root->left);
        int rightheight=height(root->right);
        int height=max(leftheight,rightheight)+1;
        return height;
     }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int leftDiameter=diameterOfBinaryTree(root->left);
        int rightDiameter=diameterOfBinaryTree(root->right);
        int currdiam=height(root->left)+height(root->right);
        return max(leftDiameter, max(rightDiameter,currdiam));
    }
};