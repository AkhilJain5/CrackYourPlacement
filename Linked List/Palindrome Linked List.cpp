class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* temp_p = nullptr;
        ListNode* curr = head;
        while(curr !=nullptr)
        {
            ListNode* temp_n = curr->next;
            curr -> next = temp_p;
            temp_p = curr;
            curr = temp_n;
        }
    return temp_p;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* mid = reverseList(slow);
        while(mid!= nullptr)
        {
            if(head->val!=mid->val)
            {
                return false;
            }
            head = head->next;
            mid = mid->next;
        }
        return true;
    }
};