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
    void solve(TreeNode* curr,int sum,int& totalsum){
        int temp = sum;
        sum = sum*10+curr->val;
        if(curr->left == NULL && curr->right==NULL){
            totalsum += sum;   
            return ;
        }
        if(curr->left){
            solve(curr->left,sum,totalsum);
        }
        if(curr->right){
            solve(curr->right,sum,totalsum);
        }
        sum = temp;
    }
public:
    int sumNumbers(TreeNode* root) {
        int totalsum=0;
        solve(root,0,totalsum);
        return totalsum;
    }
};