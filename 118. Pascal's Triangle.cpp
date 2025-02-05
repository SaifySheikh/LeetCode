class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        ans.push_back({1});

        for (int i = 1; i < n; i++) {
            vector<int> currentRow;
            currentRow.push_back(1);

            vector<int>& previousRow = ans.back();
            for (int j = 1; j < previousRow.size(); j++) {
                currentRow.push_back(previousRow[j - 1] + previousRow[j]);
            }

            currentRow.push_back(1); 
            ans.push_back(currentRow);
        }

        return ans;
    }
};