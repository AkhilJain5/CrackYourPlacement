class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
    vector<vector<int>> ans;
    set<vector<int>> temp;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for(int i=0;i<n-2;i++)
    {
      int left = i+1;
      int right = n-1;
      while(left<right)
      {
          if(nums[left]+nums[i]+nums[right] == 0)
          {
              temp.insert({nums[left], nums[i], nums[right]});
          }
          if(nums[left]+nums[i]+nums[right] > 0)
          {
              right--;
          }
          else
          {
              left++;
          }
      }
    }
    for(auto i: temp)
   {
      ans.push_back(i);
   }
    return ans;
    }
};