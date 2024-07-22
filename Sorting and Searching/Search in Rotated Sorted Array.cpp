class Solution {
public:
    int pivotel(vector<int>& arr, int n)
    {
        int s = 0;
        int e = n-1;
        
        while(s<e)
        {
            int mid = s + (e-s)/2;
            if(arr[mid]>=arr[0])
            {
                s = mid+1;
            }
            else
            {
                e = mid;
            }
        }
        return s;
    }
    int binary_search(vector<int>& arr, int start, int end, int key)
    {
        int s = start;
        int e = end;
        int mid = s + (e-s)/2;
        
        while(s<=e)
        {
            if(arr[mid]==key)
            {
                return mid;
            }
            else if (key > arr[mid])
            {
                s = mid+1;
            }
            else            
            {
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot_el = pivotel(nums,n);

            if(target >= nums[pivot_el] && target <= nums[n-1])
            {
                return binary_search(nums, pivot_el, n-1, target);
            }
            else 
            {
                return binary_search(nums, 0, pivot_el-1, target);
            }
        
    }
};