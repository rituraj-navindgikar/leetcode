class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        int n = chars.size();
        vector<char> temp;
        int i;
        for(i=0; i<n-1; i++) {
            if(chars[i] == chars[i+1]) {
                count++;
            }
            else{
                temp.push_back(chars[i]);
                if(count != 1)
                    for(auto x : to_string(count))
                        temp.push_back(x);
                count = 1;
            }
        }
        temp.push_back(chars[i]);
        if(count != 1)
            for(auto x : to_string(count))
                temp.push_back(x);

        for(auto x:temp) cout << x;
        cout << endl;
        
        chars = temp;

        return temp.size();
    }
};