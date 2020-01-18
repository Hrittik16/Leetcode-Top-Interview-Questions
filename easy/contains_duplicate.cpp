class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() <= 1) 
            return 0;
        unordered_map<int, int> frequency;
        for(int i = 0; i < nums.size(); i++) 
            frequency[nums[i]]++;
        for(auto x: frequency) {
            if(x.second >= 2) 
                return 1;
        }
        return 0;
    }
};