class Solution {
public:
    int myAtoi(string s) {
        
        int num = 0;

        bool is_negative = false;
        bool is_positive = false;

        int ia;

        bool num_found = false;
        
        for (int i=0; i < s.size(); i++) {
            
            if(!isalpha(s[i]) && s[i] != '.' && ((s[i] != ' ') || (!num_found && !is_negative && !is_positive))) {
                if (s[i] == '-'){
                    if(num_found || is_negative || is_positive) return num;
                    is_negative = true;
                }
                if (s[i] == '+'){
                    if(num_found || is_negative || is_positive) return num;
                    is_positive = true;
                }
                
                if (isdigit(s[i])) {
                    ia = s[i] - '0';
                    num_found = true;
                    if (is_negative){
                        if (num < INT_MIN / 10 || (num == INT_MIN / 10 && ia > 8))
                            return INT_MIN;
                        num = num * 10 - ia;
                    }
                    else{
                        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && ia > 7))
                            return INT_MAX;
                        num = num * 10 + ia;
                    }
                }
            }
            else 
                return num;  
        }
        return num;
    }
};