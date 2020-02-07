class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> check;
        vector<int> newArray;
        if(nums1.size() == 0 || nums2.size() == 0)
            return newArray;
        for(auto x: nums1) check[x]++;
        for(auto x: nums2) {
            if(check.find(x) != check.end()) {
                if(check[x] > 0) {
                    newArray.push_back(x);
                    check[x]--;   
                }
            }
        }
        return newArray;
    }
};