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
    bool isValidBST(TreeNode* root) {
        in_order(root);
        for(int i=1;i<res.size();i++){
            if(res[i]<=res[i-1])return false;
        }
        return true;
    }
    vector<int>res;
    void in_order(TreeNode* curr){
        if(!curr)return;
        in_order(curr->left);
        res.push_back(curr->val);
        in_order(curr->right);
           }
};
