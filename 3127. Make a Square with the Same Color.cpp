class Solution {
    public:
        bool canMakeSquare(vector<vector<char>>& grid) {
            char ch = grid[1][1];
            int W = 0, B = 0;
            ch == 'W' ? W++ : B++;
            // first box
            (grid[0][0] == 'W' ? W++ : B++);
            (grid[0][1] == 'W' ? W++ : B++);
            (grid[1][0] == 'W' ? W++ : B++);
            if(W > 2 || B > 2) return 1;
            W = 0, B = 0; ch == 'W' ? W++ : B++;
    
            // second box
            (grid[0][1] == 'W' ? W++ : B++);
            (grid[0][2] == 'W' ? W++ : B++);
            (grid[1][2] == 'W' ? W++ : B++);
            if(W > 2 || B > 2) return 1;
            W = 0, B = 0; ch == 'W' ? W++ : B++;
    
            // third box
            (grid[1][0] == 'W' ? W++ : B++);
            (grid[2][0] == 'W' ? W++ : B++);
            (grid[2][1] == 'W' ? W++ : B++);
            if(W > 2 || B > 2) return 1;
            W = 0, B = 0; ch == 'W' ? W++ : B++;
    
            // fourth box
            (grid[1][2] == 'W' ? W++ : B++);
            (grid[2][1] == 'W' ? W++ : B++);
            (grid[2][2] == 'W' ? W++ : B++);
            if(W > 2 || B > 2)return 1;
            
            return 0;
        }
    };