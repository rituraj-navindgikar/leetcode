#include <math.h>
class Solution {
public:
    int reverse(int x) {
    int rnum = 0;
    while (x != 0) {
        int remainder = x % 10;
        x /= 10;
        if (rnum > INT_MAX/10 || (rnum == INT_MAX / 10 && remainder > 7)) return 0;
        if (rnum < INT_MIN/10 || (rnum == INT_MIN / 10 && remainder < -8)) return 0;
        rnum = rnum * 10 + remainder;
    }
    return rnum;
    }
};
  
       