class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            unordered_map<int, int> map;
            long long goodPairs = 0;
            long long n = nums.size();
            long long tot_pairs=(n * (n - 1)) / 2;
            
            for (int i = 0; i < n; i++) {
                int key = nums[i] - i;
                goodPairs += map[key];
                map[key]++;
            }
            
            return tot_pairs - goodPairs;
        }
    };