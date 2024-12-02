class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int left = 0;
        int right = n-1;
        int distance;
        int max_vol = 0;
        int vol;

        while(left < right) {
            distance = right - left;
            vol = distance * min(height[left], height[right]);
            
            if(vol > max_vol) max_vol = vol;
            
            if (height[left] < height[right]) left++;
            else right--;
            
        }

        return max_vol;
    }
};