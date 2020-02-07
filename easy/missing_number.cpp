class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long int sum = 0;
        for(int i = 0; i < nums.size(); i++)
            sum += nums[i];
        int n = nums.size();
        long long int total_sum = n*(n+1)/2;
        return total_sum-sum;
    }
};