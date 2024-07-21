class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> sums;
        int count = 0;
        int subarr_sum = 0;
        sums[0] = 1;
        for(int i = 0;i<nums.size();i++)
        {
            subarr_sum +=nums[i];
            count += sums[subarr_sum - k];
            sums[subarr_sum]++;
        }
        return count;
    }
};