class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        while(head!=NULL)
        {
            int data = (head -> val);
            ans = ans *2 + data;
            head = head->next;
        }
        return ans;
    }
};