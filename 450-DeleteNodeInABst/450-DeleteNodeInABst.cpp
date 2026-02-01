// Last updated: 01/02/2026, 21:16:51
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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
            return root;
         if(key<root->val)
    root->left=deleteNode(root->left,key);
    else if(key>root->val)
    root->right=deleteNode(root->right,key);
    else{
        //case 1 : no child
        if(root->left==NULL and root->right==NULL){
           delete root;
            root=NULL;
            return root;
        }
        else if(root->left==NULL){
            TreeNode *temp=root;
            root=root->right;
            delete temp;
            return root;
        }
        else if(root->right==NULL){
            TreeNode *temp=root;
            root=root->left;
            delete temp;
            return root;
        }
        else{
        TreeNode *temp=inorderSucc(root->right);
        root->val=temp->val;
        root->right=deleteNode(root->right,temp->val); 
        }
    }
    return root;
    }
    TreeNode *inorderSucc(TreeNode *root){
    TreeNode *curr=root;
    while(curr and curr->left!=NULL)
    curr=curr->left;
    return curr; 
}
};