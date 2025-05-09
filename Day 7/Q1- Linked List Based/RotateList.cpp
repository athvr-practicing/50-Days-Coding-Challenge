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
        ListNode* rotateRight(ListNode* head, int k) {
            if(head==NULL || head->next==NULL)
            return head;
            int cnt = 1;
            ListNode* temp = head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
                cnt++;
            }
            
              k=k%cnt;
              if(k==0) return head;
    
            temp->next = head;
            
            int res = cnt - k;
            temp = head;
            int i=1;
            while(i<res)
            {
                temp=temp->next;
                i++;
            }
            ListNode* prev = temp->next;
            temp->next = NULL;
            return prev;
        }
    };