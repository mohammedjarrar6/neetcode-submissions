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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode*res;
        queue <TreeNode*>qq;
        res=root;
        qq.push(root);
        while(!qq.empty()){
        TreeNode*temp=qq.front();
        qq.pop();
        if (temp->val<p->val&&temp->val<q->val){
            qq.push(temp->right);
            res=temp->right;
        }
        else if(temp->val>p->val&&temp->val>q->val){
            qq.push(temp->left);
            res=temp->left;
        }
        else return res;
        }
        return  res;
    }
};
