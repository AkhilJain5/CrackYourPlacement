class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        ListNode* temp = head;

        while(temp!= NULL)
        {
            if(temp->val != val)
            {
                curr->next = new ListNode(temp->val);
                curr = curr->next;
            }
            temp = temp->next;
        }
        return ans->next;
    }
};