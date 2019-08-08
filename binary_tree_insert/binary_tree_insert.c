#include "stdio.h"
typedef struct node node;
struct node {
  int val;
  struct node *left, *right;
};
void print_inorder(node *root){
  if(!root)
    return;
  else{
    print_inorder(root->left);
    printf("%d\t",root->val);
    print_inorder(root->right);
  }

}
void print_preorder(node *root){
  if(!root)
    return;
  else{
    printf("%d\t",root->val);
    print_inorder(root->left);
    print_inorder(root->right);
  }

}
void print_postorder(node *root){
  if(!root)
    return;
  else{

    print_inorder(root->left);
    print_inorder(root->right);
    printf("%d\t",root->val);
  }

}
void insert(node **root,int value){
  node *temp=NULL;
  if(!(*root)){
    temp=malloc(sizeof(node));
    temp->left=temp->right=NULL;
    temp->val=value;
    *root=temp;
    return;
  }
  if(value<(*root)->val)
    insert(&((*root)->left),value);
  else if(value>(*root)->val)
    insert(&((*root)->right),value);
}


int main(int argc, char const *argv[]) {
  node *root=NULL;
  insert(&root, 2);
  insert(&root, 1);
  insert(&root, 3);
  print_inorder(root);
  putchar('\n');
  print_preorder(root);
  putchar('\n');
  print_postorder(root);
  putchar('\n');
  return 0;
}
