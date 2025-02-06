class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> productCount;
        int n = nums.size();

        // Generate all products of distinct pairs
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int product = nums[i] * nums[j];
                productCount[product]++;
            }
        }

        // Count valid tuples
        int result = 0;
        for (auto& [product, count] : productCount) {
            if (count >= 2) {
                int ways = count * (count - 1) / 2;
                result += ways * 8;
            }
        }

        return result;
    }
};