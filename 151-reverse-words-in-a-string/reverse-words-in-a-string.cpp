class Solution {
public:
    string reverseWords(string s) {    
        string ans;
        int n = s.size();
        string temp = ".";

        int i = 0;
        bool flag = false;
        while(i < n) {
            if(s[i] != ' '){
                temp += s[i];
                flag = true;
            }
            else{
                if(flag){
                    temp += ".";
                    flag = false;
                }
            }
            i++; 
        }
        n = temp.size();
        
        // for string consistency
        if(temp[n-1] != '.') temp += '.';
        // cout << temp << endl;
        
        i = n - 1;
        string word;
        
        
        flag = false;
        
        // not adding space to first reversed word
        bool first = false;
        
        while(i >= 0) {
            if(temp[i] != '.') {
                word += temp[i];
                flag = true;
            }else {
                if(flag) {
                    if(first) word += " ";
                    reverse_add(ans, word);
                    
                    // ans += " ";
                    flag = false;
                    first = true;
                    word = "";
                }    
            }
            i--;
        }
        return ans;
    }
    void reverse_add(string& ans, string& s) {
        int n = s.size();
        for(int i=n-1; i>=0; i--) {
            ans += s[i];
        }
    }
};