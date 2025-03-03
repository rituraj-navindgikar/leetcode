class Solution {
public:
    bool isVowel(char x) {
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
            return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int max_count = 0;
        int vowels_count = 0;
        
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) 
                vowels_count++;
        }
        max_count = vowels_count;

        for (int i = k; i < s.size(); i++) {
            if (isVowel(s[i])) 
                vowels_count++;

            if (isVowel(s[i - k])) 
                vowels_count--;
            max_count = max(max_count, vowels_count);
        }

        return max_count;

    }
};