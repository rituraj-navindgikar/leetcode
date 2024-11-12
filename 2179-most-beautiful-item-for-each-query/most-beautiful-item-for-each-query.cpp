class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<int> ans;
        sort(items.begin(), items.end());
        int n = items.size();

        vector<int> max_beauty(n);
        max_beauty[0] = items[0][1];
        int mid = n / 2;
        if (n == 1)
            mid = 1;

        for (int i = 1; i < n; i++) {
            max_beauty[i] = max(max_beauty[i - 1], items[i][1]);
        }
        
         for (int query : queries) {
            int idx = upper_bound(items.begin(), items.end(), vector<int>{query, INT_MAX}) - items.begin() - 1;
            
            if (idx >= 0) {
                ans.push_back(max_beauty[idx]);
            } else {
                ans.push_back(0);
            }
        }
        return ans;
    };
};