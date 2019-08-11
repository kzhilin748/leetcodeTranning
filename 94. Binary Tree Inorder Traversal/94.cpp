/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        Inorder_Traversal(ans,root);
        return ans;
    }
    void Inorder_Traversal(vector<int>& ans,TreeNode* root){
        if(root==NULL) return;
        Inorder_Traversal(ans,root->left);
        ans.push_back(root->val);
        Inorder_Traversal(ans,root->right);
    }
};