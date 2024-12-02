class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int left = 0;
        int right = n-1;
        int distance;
        int max_area = 0;
        int area;

        while(left < right) {
            distance = right - left;
            area = distance * min(height[left], height[right]);
            
            if(area > max_area) max_area = area;
            
            if (height[left] < height[right]) left++;
            else right--;
            
        }

        return max_area;
    }
};