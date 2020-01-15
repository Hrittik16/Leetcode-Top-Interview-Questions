class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> indices;
        vector<int> pair_index;
        for(int i = 0; i < nums.size(); i++) { // O(N)
            if(indices.find(target-nums[i]) == indices.end()) { // O(log(N))
                indices[nums[i]] = i;
            }
            else {
                pair_index = {i, indices[target-nums[i]]};
            }
        }
        return pair_index;
    }
};

