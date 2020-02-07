class Solution {
public:
    string frequency(string x) {
        string fre(26, '0');
        for(auto i: x) {
            fre[i-'a'] = ((fre[i-'a']-48)+1)+'0';
        }
        return fre;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagram;
        if(strs.size() == 0) {
            return anagram;
        }
        unordered_map<string, int> mp1;
        int curr = 0;
        for(int i = 0; i < strs.size(); i++) {
            string fre = frequency(strs[i]);
            //cout << "string = " << strs[i] << "\n";
            //cout << "fre = " << fre << "\n";
            if(mp1.find(fre) != mp1.end()) {
                anagram[mp1[fre]].push_back(strs[i]);
            }   
            else {
                mp1[fre] = curr;
                curr++;
                anagram.resize(curr);
                anagram[mp1[fre]].push_back(strs[i]);
            }
        }
        return anagram;
    }
};