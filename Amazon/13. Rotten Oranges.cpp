class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
       
       int n = grid.size();
       int m = grid[0].size();
       queue<pair<int, int> > rotten;
       int total= 0;
       
       
       for(int i = 0; i < n ; i++){
           for(int j = 0; j < m ; j++){
               if(grid[i][j] != 0) total++;
               
               if(grid[i][j] == 2) rotten.push({i, j});
               
           }
       }
       
       int cnt = 0;
       
       int dx[4] = {0, 0, 1, -1};
       int dy[4] = {1, -1, 0, 0};
       
       int mt = 0;
       
       while(!rotten.empty()){
           cnt += rotten.size();
           int k = rotten.size();
           
           while(k--){
             pair <int, int> p = rotten.front();
             rotten.pop();
             
             for(int i = 0; i < 4; i++){
                 int x = p.first + dx[i];
                 int y = p.second + dy[i];
                 
                 if(x < 0 or y < 0 or x >= n or y >= m or grid[x][y] != 1) continue;
                 
                grid[x][y] = 2;
                rotten.push({x, y});
             }
             
           }
           
           if(!rotten.empty()) mt++;
       }
       
       return total== cnt ? mt: -1;
    }
};
