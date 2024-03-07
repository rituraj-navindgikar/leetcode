class Solution {
public:
    bool isPalindrome(int x) {
        if( x < 0 )
            return false;
        int m = x;    
        unsigned int n = 0;
        while(x !=0){
            n = n * 10 + x % 10; 
            x /= 10;
        }
        if(m == n) 
            return true;
        return false;
    }
};