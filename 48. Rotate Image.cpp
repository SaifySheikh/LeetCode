class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> isswapped(n,vector<int>(m,-1));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j) continue;
                else{
                    if(isswapped[i][j]==-1){
                        swap(matrix[i][j],matrix[j][i]);
                        isswapped[i][j]=1;
                        isswapped[j][i]=1;
                    }
                }
            }
        }

        int l=0;
        int r=m-1;

        while(l<r){
            for(int i=0;i<n;i++){
                swap(matrix[i][l],matrix[i][r]);
            }
            l++;
            r--;
        }
    }
};