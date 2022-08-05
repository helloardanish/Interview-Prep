// Flood fill

// https://leetcode.com/problems/flood-fill/

// Easy DFS


class Solution {
private:
    void helperFillBox(vector<vector<int>> &image, int sr, int sc, int color, int newColor){
        if(sr<0 || sc < 0 || sr>=image.size() || sc>=image[0].size() || image[sr][sc] != color){
            return;
        }
        
        //change current color to new color
        image[sr][sc] = newColor;
        //check all sides
        
        helperFillBox(image, sr-1, sc, color, newColor); // top
        helperFillBox(image, sr+1, sc, color, newColor); //bottom
        helperFillBox(image, sr, sc-1, color, newColor); //left
        helperFillBox(image, sr, sc+1, color, newColor); //right
        
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor){
            return image;
        }
        
        helperFillBox(image, sr, sc, image[sr][sc], newColor);
        return image;
    }
    
    
};


// Happy Coding
// A R
