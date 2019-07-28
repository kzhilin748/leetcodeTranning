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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode** node=&root;
        while(*node!= NULL) {
            node=(((*node)->val)>val)?(&((*node)->left)):(&((*node)->right));
        }
        *node=new TreeNode(val);
        return root;
    }
};
// class Solution {
// public:
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         return  findposition(root,&val);
//     }
//     TreeNode* findposition(TreeNode* root, int *val){
//         if(root==NULL){
//             return new TreeNode(*val);
//         }
//         if(root->val>(*val))
//             root->left=findposition(root->left,val);
//         else
//             root->right=findposition(root->right,val);
        
//         return root;
//     }
    

// };