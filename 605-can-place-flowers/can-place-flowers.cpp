class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int l = flowerbed.size();
        int i=0;
        
        while(i<l) {
            if(flowerbed[i] == 0) {
                if(i == 0 || flowerbed[i-1] == 0) {
                    if((i+1 == l) || flowerbed[i+1] == 0) {
                        n--;
                        i++;
                    }
                }
            }
            if(n <= 0) return true;
            i++;
        }
        return false;
    }
};