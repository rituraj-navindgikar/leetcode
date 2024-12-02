class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_len = s.size();
        int t_len = t.size();

        if(t_len < s_len) return false;
        
        int t_left = 0;
        int s_count = 0;

        for(int i=0; i<t_len; i++) {
            if(t[i] == s[s_count]) {
                s_count++;
            }
        }
        cout << s_count << endl;
        if(s_count == s_len) return true;
        return false;
    }
};