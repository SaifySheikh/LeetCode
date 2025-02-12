class Solution {
    private:
    int sumofdigits(int x) {
        int sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>> map;
        int maxi=-1;
        for(int x : nums){
            int sum=sumofdigits(x);
            map[sum].push_back(x);
        }

        for(auto& x : map){
            int val=x.first;
            vector<int> arr=x.second;
            if(arr.size()>1){
                sort(arr.begin(),arr.end());
                maxi=max(maxi,arr[arr.size()-1]+arr[arr.size()-2]);
            }
        }

        return maxi;
    }
};