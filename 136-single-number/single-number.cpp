class Solution {
public:
    int singleNumber(vector<int>& nums) {
        #define temp_size 32000
        bool temp[temp_size] = {false};
        

        for(int i=0; i < nums.size(); i++){
            if(nums[i] < 0)
                if(!temp[temp_size-1 + nums[i]]) temp[temp_size-1 + nums[i]] = true;
                else temp[temp_size-1 + nums[i]] = false;
            else
                if(!temp[nums[i]]) temp[nums[i]] = true;
                else temp[nums[i]] = false;
            
        }

        for(int i=0; i < temp_size/2; i++){
            if(temp[i])return i;
            else if(temp[temp_size-1 - i]) return -i;
        }    
        
        return 0;
    }
};
