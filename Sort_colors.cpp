class Solution {
public:
    void sortColors(vector<int>& nums) {
        int min_index;
        for(int i = 0;i<nums.size();i++)
        {
            min_index = i;
            for(int j = i+1;j<nums.size();j++)
            {
                if(nums[j]<nums[min_index])
                {
                    min_index =j;;
                }
            }
            if (min_index != i){
                swap(nums[min_index], nums[i]);
            }
        }
    }
};