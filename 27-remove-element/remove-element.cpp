class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = nums.size(), i = 0;
        while(i<l){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
                l = l-1;
            }else i++;
        }
        return l;
    }
};