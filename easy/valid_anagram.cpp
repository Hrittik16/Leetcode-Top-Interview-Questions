class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        for(auto x: s) freq1[x-'a']++;
        for(auto x: t) freq2[x-'a']++;
        return (freq1 == freq2);
    }
};