// Number of islands

// https://leetcode.com/problems/number-of-islands/

// Medium

// Easy DFS Tactics, check flood fill for better understanding

// 1


class Solution {
public:
    void helper(vector<vector<char>> &grid, int sr, int sc){
        if(sr<0 || sc < 0 || sr>=grid.size() || sc>=grid[0].size() || grid[sr][sc]!='1'){
            return;
        }
        
        //set current to zero
        grid[sr][sc] = '0';
        
        // check all sides
        helper(grid, sr-1, sc);
        helper(grid, sr+1, sc);
        helper(grid, sr, sc-1);
        helper(grid, sr, sc+1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]=='1'){
                    ans++;//anytime we found 1 we know at least one island exist
                    helper(grid, i, j);
                }
            }
        }
        return ans;
    }
};

/*

Runtime: 54 ms, faster than 54.50% of C++ online submissions for Number of Islands.
Memory Usage: 12.1 MB, less than 97.12% of C++ online submissions for Number of Islands.

*/



// 2


class Solution {
    
    // idea : traverser the whole grid whenever encounter 1 increment the answer to 1 and 
    // convert all its neighbouring 1 to 0 using BFS or DFS
    
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = m ? grid[0].size() : 0, islands = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    islands++;
                    eraseIslands(grid, i, j);
                }
            }
        }
        return islands;
    }
private:
    void eraseIslands(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size(), n = grid[0].size();
        if (i < 0 || i == m || j < 0 || j == n || grid[i][j] == '0') {
            return;
        }
        grid[i][j] = '0';
        eraseIslands(grid, i - 1, j);
        eraseIslands(grid, i + 1, j);
        eraseIslands(grid, i, j - 1);
        eraseIslands(grid, i, j + 1);
    }
};



// 3


class Solution {
public:
    
    // idea : traverser the whole grid whenever encounter 1 increment the answer to 1 and 
    // convert all its neighbouring 1 to 0 using BFS or DFS
    
    void dfs(vector<vector<char>> &grid, int i, int j, int m, int n){
        if(i>=0 && i<m && j>=0 && j<n && grid[i][j]=='1'){
            grid[i][j] = 0;
            //traverse all direction
            dfs(grid, i-1, j, m, n);
            dfs(grid, i+1, j, m, n);
            dfs(grid, i, j-1, m, n);
            dfs(grid, i, j+1, m, n);
        }else{
            return;
        }
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0){
            return 0;
        }
        
        int m = grid.size();
        int n = grid[0].size();
        
        int ans = 0;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1'){
                    ans++;
                    dfs(grid, i, j, m, n);
                }
            }
        }
        
        return ans;
    }
    
    
};



// 4


// Using BFS, a little complex but you can try to understand

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = m ? grid[0].size() : 0, islands = 0, offsets[] = {0, 1, 0, -1, 0};
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    islands++;
                    grid[i][j] = '0';
                    queue<pair<int, int>> todo;
                    todo.push({i, j});
                    while (!todo.empty()) {
                        pair<int, int> p = todo.front();
                        todo.pop();
                        for (int k = 0; k < 4; k++) {
                            int r = p.first + offsets[k], c = p.second + offsets[k + 1];
                            if (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == '1') {
                                grid[r][c] = '0';
                                todo.push({r, c});
                            }
                        }
                    }
                }
            }
        }
        return islands;
    }
};


// 5


class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = m ? grid[0].size() : 0, islands = 0, offsets[] = {0, 1, 0, -1, 0};
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    islands++;
                    grid[i][j] = '0';
                    queue<pair<int, int>> todo;
                    todo.push({i, j});
                    while (!todo.empty()) {
                        pair<int, int> p = todo.front();
                        todo.pop();
                        for (int k = 0; k < 4; k++) {
                            int r = p.first + offsets[k], c = p.second + offsets[k + 1];
                            if (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == '1') {
                                grid[r][c] = '0';
                                todo.push({r, c});
                            }
                        }
                    }
                }
            }
        }
        return islands;
    }
};


// Happy coding

// A R
