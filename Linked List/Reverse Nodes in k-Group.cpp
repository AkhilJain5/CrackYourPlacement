class Solution {
public:
int getLength(ListNode* head) {

    int length = 0;

    ListNode* temp =head;

    while(temp != NULL) {
        length++;
        temp = temp -> next;
    }

    return length;
    }

    ListNode* reverseK(ListNode* &head, int k, int length) {
        
    if(head == NULL || head -> next == NULL || k == 1 || length < k)
        return head;
    
    ListNode* nxt = NULL;
    ListNode* curr = head;
    ListNode* prev = NULL;

    int count = 1;

    while(curr != NULL && count <= k) {

        nxt = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nxt;
        count++;
    }

    if(nxt != NULL) { 
        head -> next = reverseK(nxt, k, (length - k));
    }
    head = prev;
    
    return head;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

    int len = getLength(head);
    
    return reverseK(head, k, len);
    }
};