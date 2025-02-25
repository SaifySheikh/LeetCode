class Solution {
    public:
        bool hasSameDigits(string s) {
            while(s.size()>2){
                int i=0;
                string part;
                while(i<s.size()-1){
                    part+=to_string((s[i]+s[i+1])%10);
                    i++;
                }
                s=part;
            }
    
            return s[0]==s[1]? 1 : 0;
        }
    };