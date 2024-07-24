Node* sortList(Node *head){
    // Write your code here.
    int counts[3] = {0};
    Node* curr = head;
    while(curr!=NULL)
    {
        counts[curr->data]++;
        curr = curr->next;
    }
    curr = head;
    int i = 0;
    while(curr!= NULL)
    {
        if(counts[i]==0)
        {
            ++i;
        }
        else
        {
            curr->data = i;
            --counts[i];
            curr = curr->next;
        }
    }
    return head;
}