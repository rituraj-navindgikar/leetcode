class Solution {
public:
    int lengthOfLastWord(string s) {

        int length = 0;
        int end = s.length() - 1;
        bool word_found = true;

        if(s[end] == ' ')
            word_found = false;

        for(int i=end; i<s.length(); i--){
            if(s[i] != ' ')
                word_found = true;
            else if(!word_found)
                continue;
            else if(s[i] == ' ')
                break;
            length++;    
        }
        return length;
    }
};