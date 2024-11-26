class Solution {
public:
    string reverseVowels(string s) {
        // char vowels[10] = {'a','e','i','o','u','A','E','I','O','U'};
        string vowels = "aeiouAEIOU";
        int left = 0;
        int right = s.size() - 1;

        bool left_vowel = false, right_vowel = false;

        while(left < right) {
            if(check_vowel(s[left], vowels)){
                left_vowel = true;
            }else left++;
            
            if(check_vowel(s[right], vowels)) {
                right_vowel = true;
            }else right--;
            
            if(s[left] == s[right]) {
                right--;
                left++;
                left_vowel = false;
                right_vowel = false;
            }

            if(left_vowel && right_vowel) {     
                //cout << "found left " << s[left] << endl;     
                //cout << "found right " << s[right] << endl;
                
                swap(s[left], s[right]);
                //cout << "swapping " << s[left] << " " << s[right] << endl;
            
                left_vowel = false;
                right_vowel = false;
                left++;
                right--;
            }
        }
        return s;
    }
    bool check_vowel(char s, string vowels) {
        for(int i=0; i<vowels.size(); i++) {
            if(s == vowels[i]) {
                return true;
            }
        }
        return false;
    }
};

// apG0i4maAs::sA0m4i0Gp0

// (a)pG0i4maAs::sA0m4(i)0Gp0    a i

// ipG0(i)4maAs::s(A)0m4a0Gp0    i A
        
// ipG0A4m(a)(A)s::si0m4a0Gp0    a A

// ipG0A4mAas::si0m4a0Gp0