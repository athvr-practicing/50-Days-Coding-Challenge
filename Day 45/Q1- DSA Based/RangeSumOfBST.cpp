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
    int sum;
    void rec(TreeNode* root, int low, int high){
        if(root==NULL) return ;
        if(root->val <= high && root-> val >= low){
            sum += root->val;
        }
        rec(root->left , low,high);
        rec(root->right , low , high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        sum = 0;
        rec(root, low,high);
        return sum;
    }
};