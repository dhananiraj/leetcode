#define X_ first
#define Y_ second

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        list<pair<int,int>> rottens;
        int timeframe = 0;
        for(int i = 0; i < grid.size(); i++){
          for(int j = 0; j < grid[0].size(); j++){
            if(grid[i][j] == 2){
              rottens.push_back({i,j});
            }
          }
        }
      
        bool flag = false;
        vector<pair<int,int>> dirs{{-1,0},{0,-1},{1,0},{0,1}};
        while(rottens.size()){
          timeframe++;
          int size = rottens.size();
          while(size--){
            auto curr = rottens.front();
            rottens.pop_front();
            for(auto& dir : dirs){
              int x = curr.X_ + dir.X_, y = curr.Y_ + dir.Y_;
              if(0<=x && x<grid.size() && 0<=y && y<grid[0].size()){
                if(grid[x][y] == 1){
                  grid[x][y] = 2;
                  rottens.push_back({x,y});
                }
              }
            }  
          }
        }
        for(int i = 0; i < grid.size(); i++){
          for(int j = 0; j < grid[0].size(); j++){
            if(grid[i][j] == 1){
              return -1;
            }
          }
        }
        if(!timeframe) return 0;
        return timeframe-1;
    }
};
