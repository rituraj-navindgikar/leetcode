class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size() - 1;
        for(int i=0; i<s.size()/2; i++) {
            swap(s[i], s[len-i]);
        }
    }
};