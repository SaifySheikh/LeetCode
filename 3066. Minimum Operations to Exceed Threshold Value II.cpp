class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            int cnt = 0;
            priority_queue<long long, vector<long long>, greater<long long>> pq;
    
            for (int x : nums) {
                if (x < k) pq.push(x);
            }
    
            while (pq.size() > 1) {
                long long x = pq.top(); pq.pop();
                long long y = pq.top(); pq.pop();
                long long ele = 2LL * x + y;
    
                if (ele < k) pq.push(ele);
                cnt++;
            }
    
            if(pq.size()!=0) cnt++;
    
            return cnt;
        }
    };