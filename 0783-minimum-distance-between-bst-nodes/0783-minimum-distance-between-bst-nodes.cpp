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
    TreeNode* previous = nullptr;
    int mn = INT_MAX;
public:
    void inorder(TreeNode* root) {
        if(root==NULL) return;
        
        inorder(root->left);
        if(previous != nullptr) mn = min(mn,root->val - previous->val);
        previous = root;
        inorder(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        return mn;
        
    }
};