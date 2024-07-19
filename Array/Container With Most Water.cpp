class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int peak1 = 0;
        int peak2 = n-1;
        int maxarea = 0;
        while(peak1<peak2)
        {
            int temparea = min(height[peak1],height[peak2]) * (peak2-peak1);
            maxarea = max(maxarea,temparea);
            if(height[peak2]>height[peak1])
            {
                peak1++;
            }
            else
            {
                peak2--;
            }
        }
        return maxarea;
    }
};