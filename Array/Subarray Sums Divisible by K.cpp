class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        long long n = nums.size();
        long long count = 0;
        long long subarr_sum = 0;
        unordered_map<int,int> sums;
        sums[0] = 1;
        for(int i = 0;i<n;i++)
        {
            subarr_sum +=nums[i];
            int check = subarr_sum % k;
            if(check<0)
            {
                check+=k;
            }
            if(sums.find(check)!=sums.end())
            {
                count += sums[check];
            }
            sums[check]++;
        }
        return count;
    }
};