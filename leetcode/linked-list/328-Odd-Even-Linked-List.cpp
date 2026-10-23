class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* odd = new ListNode(-1);
        ListNode* even= new ListNode(-1);
        ListNode* temp = odd;
        ListNode* temp1 = even;
        int pos = 1;
        while(head){
            if(pos%2==1){
                ListNode* i = new ListNode(head->val);
                odd->next = i;
                odd = odd->next;
                pos++;
            }
            else{
               ListNode* i = new ListNode(head->val);
                temp1->next = i;
                temp1 = temp1->next; 
                pos++;
            }
            head = head->next;
        }
        odd->next = even->next;
        temp1->next = NULL;
        return temp->next;
    }
};