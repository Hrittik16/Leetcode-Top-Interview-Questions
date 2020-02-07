class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> check;
        int i = 0;
        while(i < nums.size()) {
            if(check.find(nums[i]) != check.end()) {
                nums.erase(nums.begin()+i);
            }
            else {
                check.insert(nums[i]);
                i++;
            }
        }
        return nums.size();
    }
};