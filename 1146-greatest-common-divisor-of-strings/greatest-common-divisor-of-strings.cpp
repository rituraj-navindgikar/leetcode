class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int l1 = str1.size();
        int l2 = str2.size();
        int gcd_len = gcd(l1, l2);
        string ans = str1.substr(0, gcd_len);

        if (!isRepeat(str1, ans) || !isRepeat(str2, ans)) {
            return "";
        }
        return ans;


    }
    bool isRepeat(const string &str, const string &sub) {
        int subLen = sub.size();
        int strLen = str.size();
        if (strLen % subLen != 0) return false; // Length mismatch

        // Check each segment of str to ensure it matches sub
        for (int i = 0; i < strLen; i++) {
            if (str[i] != sub[i % subLen]) return false;
        }
        return true;
    }
};

//   while (l2 != 0) {
//         int temp = l2;
//         l2 = l1 % l2;
//         l1 = temp;
//     }