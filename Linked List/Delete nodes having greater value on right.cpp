class Solution
{
    public:
    Node* reverselist(Node* head) {
        Node* temp1 = nullptr;
        Node* curr = head;
        while(curr !=nullptr)
        {
            Node *temp2 = curr->next;
            curr -> next = temp1;
            temp1 = curr;
            curr = temp2;
        }
    return temp1;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        head = reverselist(head);
        Node* prev = head;
        Node* curr = head;
        int check = head->data;
        head = head->next;
        while(head!= NULL)
        {
            if(head->data >= check)
            {
                check = head->data;
                prev = head;
                head = head->next;
            }
            else
            {
                prev -> next = head-> next;
                head = prev -> next;
            }
        }
        head = reverselist(curr);
        return head;
    }
    
};