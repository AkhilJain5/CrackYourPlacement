class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0;
        int mini_p = prices[0];
        int n = prices.size();
        for(int i = 1;i<n;i++)
        {
            if(mini_p > prices[i])
            {
                mini_p = prices[i];
            }
        maxp = max(maxp, prices[i]-mini_p);
        }
        return maxp;
    }
};