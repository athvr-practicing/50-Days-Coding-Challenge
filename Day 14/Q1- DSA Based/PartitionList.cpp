class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next) return head;
        ListNode* temp = head; 
        vector<int>rint;
        vector<int>lint;
        while(temp){
            if(temp->val >= x) rint.push_back(temp->val);
            else lint.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        for(int i=0;i<lint.size();i++){
            temp->val = lint[i];
            temp = temp->next;
        }
        for(int i=0;i<rint.size();i++){
            temp->val = rint[i];
            temp = temp->next;
        }
        return head;
    }
};