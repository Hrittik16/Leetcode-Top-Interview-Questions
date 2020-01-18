class Solution {
public:
    int titleToNumber(string s) {
        int number = 0;
        for(int i = 0; i < s.length(); i++) {
            number += (s[i]-'A'+1)*pow(26, s.length()-1-i);
        }
        return number;
    }
};