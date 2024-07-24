class Solution {
public:
    ListNode* reverselist(ListNode* head) {
        ListNode* temp1 = nullptr;
        ListNode* curr = head;
        while(curr !=nullptr)
        {
            ListNode *temp2 = curr->next;
            curr -> next = temp1;
            temp1 = curr;
            curr = temp2;
        }
    return temp1;
    }
    ListNode* add(ListNode* l1, ListNode* l2)
    {
        ListNode* result = new ListNode(0);
        ListNode* current = result;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0) 
        {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        result = result->next;
        return result;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1= reverselist(l1);
        l2= reverselist(l2);
        ListNode* ans = add(l1,l2);
        ans = reverselist(ans);
        return ans;
    }
};