class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max_candies = 0;
        for(auto x : candies) {
            if(x > max_candies)
                max_candies = x;
        }
        for(auto x : candies) {
            if((x + extraCandies) >= max_candies)
                ans.push_back(true);
            else
                ans.push_back(false);
        }

        return ans;
    }
};