class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        
        sort(nums.begin(), nums.end());

        for(auto x: nums) cout << x << " ";
        cout << endl;
        int l1 = 0;
        int l2 = n-1;

        while(l1 < l2) {
            if(nums[l1] + nums[l2] == k) {
                count++;
                l1++;
                l2--;
            }

            if(nums[l1] + nums[l2] > k) l2--;
            if(nums[l1] + nums[l2] < k) l1++;
            
            
        }

        return count;
    }
};