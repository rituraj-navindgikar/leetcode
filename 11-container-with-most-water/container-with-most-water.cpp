class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int left = 0;
        int right = n-1;
        int distance = right - left;
        int max_vol = 0;
        int vol = 0;
        while(left < right) {
            distance = right - left;
            vol = distance * min(height[left], height[right]);
            cout << distance << min(height[left],height[right]) << endl;
            cout << vol << endl; 

            if(vol > max_vol) {
                max_vol = vol;
            }
            
            if (height[left] < height[right]) left++;
            else right--;
            
        }

        return max_vol;
    }
};