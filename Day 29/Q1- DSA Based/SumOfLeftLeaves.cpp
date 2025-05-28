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

    void solve(int& ans, TreeNode* root, bool& flag) {

        if(!root) return;
        else if (!root->left && !root->right && flag){
            ans += root->val;
        } 
        
        flag = true;
        solve(ans, root->left, flag);
        flag = false;
        solve(ans, root->right, flag);
        
    }

    int sumOfLeftLeaves(TreeNode* root) {
        
       int ans = 0;
       bool flag = false;
       solve(ans, root, flag);

       return ans;
    }
};