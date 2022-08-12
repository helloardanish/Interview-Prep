// Number of Enclaves

// Medium

// https://leetcode.com/problems/number-of-enclaves/


// 1

/*

Idea:

If any 1 is found at boundary, make it 0 and also its connected 1 should be zero
we did this in flood fill

Now in the next iterate just count 1 and it will be our answer

*/

class Solution {
public:
    
    void floodFill(vector<vector<int>> &grid, int r, int c, int m,  int n){
        
        //base condition
        if(r<0 || c < 0 || r>=m || c>=n || grid[r][c] != 1){
            return;
        }
        
        //update the islands
        grid[r][c] = 0;
        
        
        // move all sides
        floodFill(grid, r-1, c, m, n);
        floodFill(grid, r+1, c, m, n);
        floodFill(grid, r, c-1, m, n);
        floodFill(grid, r, c+1, m, n);
    }
    
    
    int numEnclaves(vector<vector<int>> &grid) {
        if(grid.size()==0) return 0;
        
        int noOfEnclaves = 0;
        int m=grid.size(), n=grid[0].size();
        
        // fill all 1 and their connected 1 to zero
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if((i==0 || j==0 || i==m-1 || j==n-1) && grid[i][j]==1){
                    floodFill(grid, i, j, m, n);
                }
            }
        }
        
        //count no of 1 left
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    noOfEnclaves++;
                }
            }
        }
        
        
        return noOfEnclaves;
    }
};



/*
Runtime: 98 ms, faster than 50.75% of C++ online submissions for Number of Enclaves.
Memory Usage: 21.8 MB, less than 56.88% of C++ online submissions for Number of Enclaves.
*/


// 2 more optimised


class Solution {
public:
    
    void floodFill(vector<vector<int>> &grid, int r, int c, int m,  int n){
        
        //base condition
        if(r<0 || c < 0 || r>=m || c>=n || grid[r][c] != 1){
            return;
        }
        
        //update the islands
        grid[r][c] = 0;
        
        
        // move all sides
        floodFill(grid, r-1, c, m, n);
        floodFill(grid, r+1, c, m, n);
        floodFill(grid, r, c-1, m, n);
        floodFill(grid, r, c+1, m, n);
    }
    
    
    int numEnclaves(vector<vector<int>> &grid) {
        if(grid.size()==0) return 0;
        
        int noOfEnclaves = 0;
        int m=grid.size(), n=grid[0].size();
        
        // fill all 1 and their connected 1 to zero
        
        //for 1 who are at first row and last row   |  |
        
        for (int i = 0; i < m; ++i) {
            if (grid[i][0] == 1) floodFill(grid, i, 0, m, n);
            if (grid[i][n-1] == 1) floodFill(grid, i, n - 1, m, n);
        }
        
        //for 1 who are at first column and last column | |
        
        for (int i = 0; i < n; ++i) {
            if (grid[0][i] == 1) floodFill(grid, 0, i, m, n);
            if (grid[m-1][i] == 1) floodFill(grid, m - 1, i, m, n);
        }
        
        //count no of 1 left
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    noOfEnclaves++;
                }
            }
        }
        
        
        return noOfEnclaves;
    }
};


/*
Runtime: 73 ms, faster than 81.52% of C++ online submissions for Number of Enclaves.
Memory Usage: 21.5 MB, less than 98.51% of C++ online submissions for Number of Enclaves.
*/



// Happy Coding
// A R
