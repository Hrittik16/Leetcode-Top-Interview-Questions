class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m;
        for(auto x: nums2) {
            nums1[i] = x;
            i++;
        }
        sort(nums1.begin(), nums1.begin()+n+m);
    }
};