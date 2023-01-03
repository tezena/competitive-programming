class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode *temp1=head;
        ListNode *temp2=head;
        while(temp2!=NULL && temp2->next!=NULL){
            temp1=temp1->next;
            temp2=temp2->next->next;
        }
        head=temp1;
        return head;
    }
};
