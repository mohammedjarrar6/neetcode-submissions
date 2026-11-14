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
    vector<int> rightSideView(TreeNode* root) {
        helps(root,0);
        return res;
    }
    vector<int>res;
    void helps(TreeNode* curr,int depth){
        if(!curr)return;
        if(depth==res.size())
        res.push_back(curr->val);
        helps(curr->right,depth+1);
        helps(curr->left,depth+1);
    }
};
