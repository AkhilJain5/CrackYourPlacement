class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here      
        vector<long long int> ans;
        int flag = 0;
        long long int product = 1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                product = product*nums[i];
            }
            else
            {
                flag++;
            }
        }
        for(int i = 0;i<n;i++)
        {
            if(flag == 0)
            {
                ans.push_back(product/nums[i]);
            }
            else if(flag == 1 && nums[i] == 0)
            {
                ans.push_back(product);
            }
            else 
            {
                ans.push_back(0);
            }
        }
        return ans;
    }
};