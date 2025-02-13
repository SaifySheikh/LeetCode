class Solution {
    public:
        int minStoneSum(vector<int>& piles, int k) {
            priority_queue<int> pq(piles.begin(), piles.end());
            int sum = 0;
    
            while (k-- > 0 && !pq.empty()) {
                int ele = pq.top();
                pq.pop();
                ele -= ele / 2;
                pq.push(ele);
            }
    
            while (!pq.empty()) {
                sum += pq.top();
                pq.pop();
            }
    
            return sum;
        }
    };