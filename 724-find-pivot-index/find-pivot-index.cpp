class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left_sum = 0;
        int right_sum = 0;

        for(int x : nums) {
            right_sum += x;
        }

        for (int i = 0; i < nums.size(); i++) {
            right_sum -= nums[i];
            if (left_sum == right_sum) return i;
            left_sum += nums[i];
        }

        return -1;
    }
};

//    right
//    1 2 3 4 5 6 7 8 9 

//    j    right
//    1     2 3 4 5 6 7 8 9 
   
//    left  j  right
//    1     2    3 4 5 6 7 8 9 
   
//    left  j  right
//    1 2   3   4 5 6 7 8 9 

//  right
//  2 1 -1

//  j   right
//  2    1 -1



