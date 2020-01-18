class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int beg = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                if(beg == -1) beg = i;
            }
            else {
                if(beg != -1) {
                    nums[beg] = nums[i];
                    nums[i] = 0;
                    beg++;
                }
            }
        }
    }
};