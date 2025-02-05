class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        vector<int> prefixSum(n);
        prefixSum[0] = nums[0];

        int maxPrefix = 0; 
        int minPrefix = 0;

        if(maxPrefix<nums[0]) maxPrefix = nums[0];
        if(minPrefix>nums[0]) minPrefix = nums[0];

        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
            maxPrefix = max(maxPrefix, prefixSum[i]);
            minPrefix = min(minPrefix, prefixSum[i]);
        }

        return abs(maxPrefix - minPrefix);
    }
};