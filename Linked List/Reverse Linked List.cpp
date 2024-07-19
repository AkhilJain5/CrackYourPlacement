class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp1 = nullptr;
        while(head !=nullptr)
        {
            ListNode *temp2 = head->next;
            head -> next = temp1;
            temp1 = head;
            head = temp2;
        }
    return temp1;
    }
};
