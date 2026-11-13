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
    int helps(TreeNode* curr ,int depth){
        if(!curr)return depth;
        return max(helps(curr->left,depth+1),helps(curr->right,depth+1));

    }
    int maxDepth(TreeNode* root) {
        return helps(root,0);
    }
};
