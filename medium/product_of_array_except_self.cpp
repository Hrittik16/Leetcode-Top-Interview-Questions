class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 1);
        int productFromLeft = 1;
        for(int i = 0; i < nums.size(); i++) {
            output[i] *= productFromLeft;
            productFromLeft *= nums[i];
        }
        int productFromRight = 1;
        for(int j = nums.size()-1; j >= 0; j--) {
            output[j] *= productFromRight;
            productFromRight *= nums[j];
        }
        return output;
    }
};
