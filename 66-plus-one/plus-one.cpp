class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        for(int i=nums.size() - 1; i>-1; i--){ 
            if(nums[i] < 9){
                nums[i] += 1;
                return nums;
            }
            nums[i] = 0;
        } 
        nums.insert(nums.begin(), 1);
        return nums;
    }
    
};