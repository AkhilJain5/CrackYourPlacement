class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        const int MOD = 1000000007; 
        long long digit1 = 0;
        long long digit2 = 0;
        while(first!= NULL)
        {
            digit1 = (digit1*10)%MOD + first->data;
            first = first->next;
        }
        while(second!= NULL)
        {
            digit2 = (digit2*10)%MOD + second->data;
            second= second->next;
        }
        long long product = (digit1 * digit2)%MOD;
        
        return product;
    }
};