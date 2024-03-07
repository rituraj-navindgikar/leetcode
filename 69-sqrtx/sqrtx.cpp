class Solution {
public:
    int mySqrt(int x) {
        int i=1, ans = -1;
        while(x>=0){
            x-= i;
            i+= 2;
            ans += 1;
        }
        return ans;
        
    }
};