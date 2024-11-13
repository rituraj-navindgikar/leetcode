class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        // Sort the array to use two-pointer or binary search technique
        sort(nums.begin(), nums.end());
        long long count = 0;
        
        // Iterate through each index i, and find range of valid j values
        for (int i = 0; i < nums.size(); ++i) {
            int left = i + 1; // Start looking at pairs (i, j) where j > i
            
            // Use binary search to find the range of j that satisfies the condition
            auto low = lower_bound(nums.begin() + left, nums.end(), lower - nums[i]);
            auto high = upper_bound(nums.begin() + left, nums.end(), upper - nums[i]);
            
            // Calculate the number of valid pairs with the current nums[i]
            count += distance(low, high);
        }
        
        return count;
    }
};
