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

    TreeNode* help(TreeNode* curr){
        if(!curr)return curr;
        help(curr->left);
        help(curr->right);
        swap(curr->left,curr->right);
        return curr;
    }
    TreeNode* invertTree(TreeNode* root) {
        help(root);
        return root;
    }
};
