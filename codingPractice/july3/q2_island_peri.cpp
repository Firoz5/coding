class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int i,c=0,finals=0,j;
        for(i=0;i<grid.size();i++)
        {
            
            for(j=0;j<grid[i].size();j++)
            {
                c=0;
                if(grid[i][j]==1){
                   
                if(i-1>=0){
                if(grid[i-1][j]==1)
                {
                   c++;
                }
                }
                if(j-1>=0){
                if(grid[i][j-1]==1)
                {
                    c++;
                }
                }
                if(i+1<grid.size()){
                if(grid[i+1][j]==1)
                {
                    c++;
                }
                }
                if(j+1<grid[i].size()){
                if(grid[i][j+1]==1)
                {
                    c++;
                }
                }
                    finals = finals+(4-c);
                }
                
            }
        }
        return finals;
    }
};