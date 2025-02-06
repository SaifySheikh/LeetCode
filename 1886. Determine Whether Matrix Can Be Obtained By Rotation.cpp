class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if (mat == target) {
            return true;
        }

        int n = mat.size();
        // rotating 90, 180, and 270 degrees
        for (int rotation = 1; rotation <= 3; ++rotation) {
            rotateMatrix(mat);
            if (mat == target) {
                return true;
            }
        }

        return false;
    }

private:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        // Transpose the matrix
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                swap(mat[i][j], mat[j][i]);
            }
        }
        // Reverse each row
        for (int i = 0; i < n; ++i) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }
};