class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
    vector<int> two_sum;
    int n = arr.size();
    for(int first_el =0;first_el<n;first_el++)
    {
        for(int second_el = first_el+1;second_el<n;second_el++)
        {
            if(arr[first_el]+arr[second_el] == target)
            {
                two_sum.push_back(first_el);
                two_sum.push_back(second_el);
            }
        }
    }
    return two_sum;
    }
};