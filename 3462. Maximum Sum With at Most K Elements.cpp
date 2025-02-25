class Solution {
    public:
        long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
            int n=grid.size();
            int m=grid[0].size();
            long long sum=0;
            vector<int> ans;
    
            for(int i=0;i<n;i++){
                vector<int> arr=grid[i];
                sort(arr.begin(),arr.end(),greater<int>());
                ans.insert(ans.end(),arr.begin(),arr.begin()+limits[i]);
            }
    
            sort(ans.begin(),ans.end(),greater<int>());
            for(int i=0;i<k;i++){
                sum+=ans[i];
            }
    
            return sum;
        }
    };