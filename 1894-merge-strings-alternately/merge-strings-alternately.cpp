class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int word1_len = word1.size();
        int word2_len = word2.size();

        string ans;
        
        int i=0, j=0;

        while( (i < word1_len) || (j < word2_len) ) {
            if (i < word1_len)
                ans += word1[i];
            if (j < word2_len)    
                ans += word2[j];
            j++;
            i++;
        }

        return ans;
    }
};