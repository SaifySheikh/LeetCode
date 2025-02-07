class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> arr;
        unordered_map<int, int> freqMap;
        vector<int> ans;

        for (auto& query : queries) {
            int x = query[0], y = query[1];

            if (arr.count(x)) {
                int prevValue = arr[x];
                if (--freqMap[prevValue] == 0) freqMap.erase(prevValue);
            }
            
            arr[x] = y;
            freqMap[y]++;
            ans.push_back(freqMap.size());
        }

        return ans;
    }
};
