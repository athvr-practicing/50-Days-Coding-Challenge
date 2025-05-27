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
        ListNode* reverseList(ListNode* head) {
            if (head==NULL||head->next==NULL){return head;}
            ListNode* prev=NULL;
            ListNode* curr=head;
            ListNode* forw=head;
            while (curr!=NULL){
                forw=curr->next;
                curr->next=prev;
                prev=curr;
                curr=forw;
            }
            return prev;
        }
        int gl(ListNode* head){
            int x=0;
            while (head!=NULL){head=head->next;x++;}
            return x;
        }
        bool isPalindrome(ListNode* head) {
            int k=gl(head);
            ListNode* rev=head;
            ListNode* che=head;
            int b=k/2;
            while (b>0){b--;rev=rev->next;}
            rev=reverseList(rev);
            b=k/2;
            while (b>0){
                if (che->val!=rev->val){return false;}
                che=che->next;
                rev=rev->next;
                b--;
            }
            return true;
        }
    };