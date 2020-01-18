class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int firstUniqChar(string s) {
        unordered_map<char, int> frequency;
        for(auto x: s)
            frequency[x]++;
        for(int i = 0; i < s.length(); i++) {
            if(frequency[s[i]] == 1)
                return i;
        }
        return -1;
    }
};