class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2) {
            return true;
        }
        
        vector<int> diffIndices;
        for (int i = 0; i < s1.length(); ++i) {
            if (s1[i] != s2[i]) {
                diffIndices.push_back(i);
            }
        }
        
        if (diffIndices.size() != 2) {
            return false;
        }
        
        int idx1 = diffIndices[0];
        int idx2 = diffIndices[1];
        
        swap(s1[idx1], s1[idx2]);
        
        return s1 == s2;
    }
};