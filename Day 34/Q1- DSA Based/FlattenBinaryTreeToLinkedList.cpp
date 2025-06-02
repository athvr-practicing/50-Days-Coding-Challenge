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
    void preorder(TreeNode* root){
        if(root == NULL){
            return;
        }
        preorder(root->left);
        preorder(root->right);
        if(root->left == NULL){
            return;
        }
        if(root->right == NULL){
            root->right = root->left;
            root->left = NULL;
            return;
        }
        TreeNode* temp = root->right;
        TreeNode* temp2 = root->left;
        while(temp2->right != NULL){
            temp2 = temp2->right;
        }
        root->right = root->left;
        temp2->right = temp;
        root->left = NULL;
    }
    void flatten(TreeNode* root) {
        preorder(root);
    }
};