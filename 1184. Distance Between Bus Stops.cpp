class Solution {
    public:
        int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
    
            int ans=0;
            int total=0;
    
            if(start<destination){
                for(int i=start;i<destination;i++){
                    ans += distance[i];
                }
            }
    
            else{
                for(int i=destination;i<start;i++){
                    ans += distance[i];
                }
            }
    
            for(int i=0;i<distance.size();i++){
                total+=distance[i];
            }
    
            ans=min(ans,(total-ans));
            return ans;
        }
    };