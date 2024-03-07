class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0, den = 5;   
        while(n >=den){
            ans += n/den;
            den *= 5;
        }
        return ans;
    }
}; 