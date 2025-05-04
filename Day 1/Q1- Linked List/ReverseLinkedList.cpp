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
 class Solution
 {
 public:
     ListNode *reverseList(ListNode *head)
     {
         ListNode *current = head;
         ListNode *left = NULL;
 
         while (current != NULL)
         {
             ListNode *right = head;
             right = current->next;
             current->next = left;
             left = current;
             current = right;
         }
         return left;
     }
 };