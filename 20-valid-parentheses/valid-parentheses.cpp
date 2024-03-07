#include <vector>
class Solution {
public:
    bool isValid(string s) {
        int cl = 0, ps = 0, sq = 0;
        vector<char> current;  
        // 0 - {
        // 1 - (
        // 2 - [ 

        for(int i=0; i<s.size(); i++){
            if(s[i] == '{'){
                cl += 1;
                current.push_back(s[i]);
            }
            else if(s[i] == '('){
                ps += 1;
                current.push_back(s[i]);
            } 
            else if(s[i] == '['){
                sq +=1;
                current.push_back(s[i]);
            }    
            else if(s[i] == '}'){
                cl -= 2;
                if(!current.empty() && current.back() == '{'){
                    current.pop_back();
                    cl += 1;
                }
            }    
            else if(s[i] == ')'){
                ps -= 2;
                if(!current.empty() && current.back() == '('){
                    current.pop_back();
                    ps += 1;
                }
            }    
            else if(s[i] == ']'){     
                sq -= 2;
                if(!current.empty() && current.back() == '['){
                    current.pop_back();
                    sq += 1;
                }
            } 
        }
        if(cl == 0 and ps == 0 && sq == 0)
            return true;
        return false;    
    }
};