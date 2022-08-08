// Number of Closed Islands

// Medium

// https://leetcode.com/problems/number-of-closed-islands/


// 1

// Easy DFS

class Solution {
public:
    bool ifAtParameter(vector<vector<int>> grid, int r, int c, int m, int n){
        
        /*
        if(r==0 || r==m-1 || c==0 || c==n-1){
            return true;
        }
        return false;
        */
        
        return r==0 || r==m-1 || c==0 || c==n-1;
    }
    
    
    bool isCurrConnIslandClosedIsland(vector<vector<int>>& grid, int r, int c, int m, int n){
        
        // if either visited(2) or water(1), it can be closed island
        if(grid[r][c]==1 || grid[r][c]==2) return true;
        
        // if at boundary it will never be a closed islands
        if(ifAtParameter(grid, r, c, m, n)) return false;
        
        //update the islands to differentiate that its visited
        grid[r][c] = 2;
        
        //check all sides
        bool top = isCurrConnIslandClosedIsland(grid, r-1, c, m, n);
        bool bottom = isCurrConnIslandClosedIsland(grid, r+1, c, m, n);
        bool left = isCurrConnIslandClosedIsland(grid, r, c-1, m, n);
        bool right = isCurrConnIslandClosedIsland(grid, r, c+1, m, n);
        
        return top && bottom && left && right;
    }
    
    
    int closedIsland(vector<vector<int>>& grid) {
        //edge case
        if(grid.size()==0) return 0;
        
        int m=grid.size(), n=grid[0].size();
        
        int closeIslands=0;
        
        for(int i=0; i<m-1; i++){
            for(int j=0; j<n-1; j++){
                if(grid[i][j]==0){
                    if(isCurrConnIslandClosedIsland(grid, i, j, m, n)){
                        closeIslands++;
                    }
                }
            }
        }
        
        return closeIslands;
    }
};

/*

Runtime: 1712 ms, faster than 5.02% of C++ online submissions for Number of Closed Islands.
Memory Usage: 675.2 MB, less than 5.17% of C++ online submissions for Number of Closed Islands.

*/


// Solution is too slow
// BFS will work good here as you see on line 33
// if(ifAtParameter(grid, r, c, m, n)) return false;
// If one condition is false we know not anny connected value will make it a closed islands
// In BFS you can just break the loop


// 2

class Solution {
public:
    bool ifAtParameter(vector<vector<int>> &grid, int r, int c, int m, int n){
        
        /*
        if(r==0 || r==m-1 || c==0 || c==n-1){
            return true;
        }
        return false;
        */
        
        return r==0 || r==m-1 || c==0 || c==n-1;
    }
    
    
    bool isCurrConnIslandClosedIsland(vector<vector<int>> & grid, int r, int c, int m, int n){
        
        // if either visited(2) or water(1), it can be closed island
        if(grid[r][c]==1 || grid[r][c]==2) return true;
        
        // if at boundary it will never be a closed islands
        if(ifAtParameter(grid, r, c, m, n)) return false;
        
        //update the islands to differentiate that its visited
        grid[r][c] = 2;
        
        //check all sides
        bool top = isCurrConnIslandClosedIsland(grid, r-1, c, m, n);
        bool bottom = isCurrConnIslandClosedIsland(grid, r+1, c, m, n);
        bool left = isCurrConnIslandClosedIsland(grid, r, c-1, m, n);
        bool right = isCurrConnIslandClosedIsland(grid, r, c+1, m, n);
        
        return top && bottom && left && right;
    }
    
    
    int closedIsland(vector<vector<int>>& grid) {
        //edge case
        if(grid.size()==0) return 0;
        
        int m=grid.size(), n=grid[0].size();
        
        int closeIslands=0;
        
        for(int i=0; i<m-1; i++){
            for(int j=0; j<n-1; j++){
                if(grid[i][j]==0){
                    if(isCurrConnIslandClosedIsland(grid, i, j, m, n)){
                        closeIslands++;
                    }
                }
            }
        }
        
        return closeIslands;
    }
};


/*
Runtime: 17 ms, faster than 69.95% of C++ online submissions for Number of Closed Islands.
Memory Usage: 9.4 MB, less than 93.34% of C++ online submissions for Number of Closed Islands.
*/

// Passing by reference make it faster a lot
// always use  reference instead of creating new copy
// Unless you are not going to use original copy again


// Happy Coding
// A R
