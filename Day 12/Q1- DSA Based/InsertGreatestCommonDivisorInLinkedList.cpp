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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL || head->next == NULL)  return head;

        ListNode* currNode = head;
        ListNode* nextNode = head->next;

        while(nextNode != NULL){
            ListNode* gcdNode = new ListNode(__gcd(currNode->val,nextNode->val));
            gcdNode->next = nextNode;
            currNode->next = gcdNode;
            currNode = nextNode;
            nextNode = nextNode->next;
        }
        return head;
    }
};