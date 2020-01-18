class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int romanToInt(string s) {
        int num = 0;
        if(s.length() == 0)
            return num;
        unordered_map<char, int> values;
        values['I'] = 1;
        values['V'] = 5;
        values['X'] = 10;
        values['L'] = 50;
        values['C'] = 100;
        values['D'] = 500;
        values['M'] = 1000;
        if(s.length() == 1) {
            return values[s[0]];
        }
        vector<bool> check(s.length(), 0);
        int i = 1;
        while(i < s.length()) {
            if((s[i] == 'V' || s[i] == 'X') && s[i-1] == 'I') {
                num += values[s[i]]-values[s[i-1]];
                check[i-1] = check[i] = 1;
                i += 2;
            }
            else if((s[i] == 'L' || s[i] == 'C') && s[i-1] == 'X') {
                num += values[s[i]]-values[s[i-1]];
                check[i-1] = check[i] = 1;
                i += 2;
            }
            else if((s[i] == 'D' || s[i] == 'M') && s[i-1] == 'C') {
                num += values[s[i]]-values[s[i-1]];
                check[i-1] = check[i] = 1;
                i += 2;
            }
            else {
                num += values[s[i-1]];
                check[i-1] = 1;
                i++;
            }
        }
        if(!check[s.length()-1]) num += values[s[s.length()-1]];
        if(s.length() > 1)
            if(!check[s.length()-2]) num += values[s[s.length()-2]];
        return num;
    }
};