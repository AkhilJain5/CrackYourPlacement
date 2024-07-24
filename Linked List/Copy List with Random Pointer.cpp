class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return NULL;
        Node* curr = head;
        unordered_map<Node*, Node*> newlist;
        while(curr!= NULL)
        {
            newlist[curr] = new Node (curr->val);
            curr = curr->next;
        }
        curr = head;
        while(curr!=NULL)
        {
            newlist[curr]->next = newlist[curr->next];
            newlist[curr]->random = newlist[curr->random];
            curr = curr->next;
        }
       return newlist[head];
    }
};