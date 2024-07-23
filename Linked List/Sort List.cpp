class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* curr = head;
        vector<int> ans;
        while(curr!=NULL)
        {
            ans.push_back(curr->val);
            curr = curr->next;
        }
        sort(ans.begin(),ans.end());
        curr = head;
        int i = 0;

        while(curr!= NULL)
        {
            curr->val = ans[i++];
            curr = curr->next;
        }
        return head;
    }
};