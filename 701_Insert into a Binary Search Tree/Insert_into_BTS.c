/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* insertIntoBST(struct TreeNode* root, int val){
        struct TreeNode** node=&root;
        while(*node!=NULL){
            node=(((*node)->val)>val)?(&((*node)->left)):(&((*node)->right));
        }
        *node=(struct TreeNode*)malloc(sizeof(struct TreeNode));
        (*node)->val=val;
        (*node)->left=(*node)->right=NULL;
        
        return root;
}