class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        
        int max_sum = 0, curr_sum = 0;

        for(int i=0; i<k; i++) {
            curr_sum += nums[i];
        }
        max_sum = curr_sum;
        for(int i=k; i<n; i++) {
            curr_sum += nums[i] - nums[i - k];
            if(curr_sum > max_sum) max_sum = curr_sum;
        }

        return (double) max_sum / k ;
    }
};