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
class Solution {
public:
    ListNode* add(ListNode* l1 , ListNode* l2 , int carry) {
        if (!l1 && !l2 && carry == 0) return NULL;
        int sum = carry;
        if (l1) sum += l1->val;
        if (l2) sum += l2->val;
        ListNode* temp = new ListNode(sum % 10);
        temp->next = add(l1 ? l1->next : l1, l2 ? l2->next : l2,sum / 10);
        return temp;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return add(l1, l2, 0);
    }
};