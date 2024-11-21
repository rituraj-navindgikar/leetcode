class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0], sell = 0;
        int max = 0;

        int j=1;
        for(int i=0; i<n && j<n; i++, j++){
            if (buy > prices[i])
                buy = prices[i];
            sell = prices[j];

            if ((sell - buy) > max)
                max = sell - buy;

            if(j<(n-1)) j = i;
        }
        
        return max;
    }
};

