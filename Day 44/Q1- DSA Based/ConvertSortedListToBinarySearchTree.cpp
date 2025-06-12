/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        // Convert the linked list to an array
        std::vector<int> values;
        while (head) {
            values.push_back(head->val);
            head = head->next;
        }
        
        // Recursively construct the BST
        return buildTree(values, 0, values.size() - 1);
    }

private:
    TreeNode* buildTree(const std::vector<int>& values, int start, int end) {
        if (start > end) return nullptr;

        int mid = start + (end - start) / 2;
        TreeNode* node = new TreeNode(values[mid]);

        node->left = buildTree(values, start, mid - 1);
        node->right = buildTree(values, mid + 1, end);

        return node;
    }
};