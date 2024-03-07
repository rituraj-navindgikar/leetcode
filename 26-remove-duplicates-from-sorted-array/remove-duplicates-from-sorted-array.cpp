class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, x = 0, l = nums.size() - 1;
        while(x<l){
            if(nums[i] == nums[i+1]) 
                nums.erase(nums.begin() + i);
            else
                i+=1;
            x+=1;
        }    
        return nums.size(); 
    }
};