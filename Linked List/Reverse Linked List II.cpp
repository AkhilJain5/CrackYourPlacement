class Solution {
public:
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* result = new ListNode(0);
        result->next = head;
        ListNode* prev = result;
        for(int i =0;i<left-1;i++)
        {
            prev = prev->next;
        }
        ListNode* curr = prev->next;
        for(int i = 0;i<right-left;i++)
        {
            ListNode* nxt = curr->next;
            curr -> next = nxt->next;
            nxt->next = prev ->next;
            prev -> next = nxt;
        }
        
        return result->next;
    }
};