// Max Area of Island

// https://leetcode.com/problems/max-area-of-island/

// Medium


// Easy DFS

class Solution {
public:
    int countConnectedIslands(vector<vector<int>> &grid, int r, int c){
        //base case
        if(r<0 || c<0 || r>=grid.size() || c>=grid[0].size() || grid[r][c]==0){
            return 0;
        }
        
        //update island
        grid[r][c] = 0;
        
        // top bottom left right
        
        return 1+
            countConnectedIslands(grid, r-1, c)+
            countConnectedIslands(grid, r+1, c)+
            countConnectedIslands(grid, r, c-1)+
            countConnectedIslands(grid, r, c+1);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.size()==0) return 0;
        int ans=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                //if current place is island >> 1
                if(grid[i][j]==1){
                    //count the connected islands >> 1
                    int temp = countConnectedIslands(grid, i, j);
                    //update the connected island value if larger island found
                    if(temp > ans) ans=temp;
                }
            }
        }
        return ans;
    }
};



/*
Runtime: 35 ms, faster than 36.07% of C++ online submissions for Max Area of Island.
Memory Usage: 23.2 MB, less than 87.05% of C++ online submissions for Max Area of Island.
*/
