class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int threshold = floor((float)nums.size()/(float)2);
        unordered_map<int, int> frequency;
        int element = -1, mx = -1;
        for(int i = 0; i < nums.size(); i++) {
            frequency[nums[i]] += 1;
        }
        for(auto x: frequency) {
            if(x.second > mx) {
                mx = x.second;
                element = x.first;
            }
        }
        return element;
    }
};
