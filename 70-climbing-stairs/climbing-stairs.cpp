class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        if(n == 2) return 2;
        if(n == 3) return 3;

        int ans = 0, prev1 = 3, prev2 = 2;
        int i = 3;
        
        do{
            ans = prev1 + prev2;
            prev2 = prev1;
            prev1 = ans;
            i++;
        }while(i != n);
        return ans;
    }
};