class Solution {
    public:
        int halveArray(vector<int>& nums) {
            int cnt=0;
            priority_queue<double> pq;
            for(int x : nums){
                pq.push(x);
            }
            double sum=accumulate(nums.begin(),nums.end(),0.0);
            double target=sum-(sum/2);
            while(sum>target){
                double ele=pq.top();
                pq.pop();
                sum=sum-ele+(ele/2);
                cnt++;
                pq.push(ele/2);
            }
    
            return cnt;
        }
    };