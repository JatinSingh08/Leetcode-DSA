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
    int find(TreeNode* root, int minNum, int maxNum) {
        if(root == NULL) return maxNum-minNum;
        
        maxNum = max(maxNum, root->val);
        minNum = min(minNum, root->val);
        
        return max(find(root->left,minNum,maxNum), find(root->right,minNum,maxNum));
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        int maxNum = 0, minNum = 100000;
        return find(root,minNum,maxNum);
    }
};