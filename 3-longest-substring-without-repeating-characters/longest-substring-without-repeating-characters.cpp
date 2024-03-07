class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        #define size_bool 127
        bool temp[size_bool] = {false};
        int ans = 0;
        int max = 0;
        int prev = 0;
        for(int x=0; x < s.size(); x++){  
            int num = (int) s[x];
            if(temp[num] == false){
                temp[num] = true;
                ans++;
            }else{
                x = prev++; 
                if(max <= ans)
                    max = ans;
                ans = 0;
                fill_n(temp, size_bool, false);
            }
        }
        if(max < ans)
            return ans;
        return max;
    }
};