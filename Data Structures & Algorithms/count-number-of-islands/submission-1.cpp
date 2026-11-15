class Solution {
public:
int counter=0;
void dfs( vector<vector<char>>&grid,int i,int j){
    if(i>0&&grid[i-1][j]=='1'){
        grid[i-1][j]=0;
        dfs(grid,i-1,j);
    }
    if(j>0&&grid[i][j-1]=='1'){
        grid[i][j-1]=0;
        dfs(grid,i,j-1);
    }
    if(i<grid.size()-1&&grid[i+1][j]=='1'){
        grid[i+1][j]=0;
        dfs(grid,i+1,j);
    }
    if(j<grid[0].size()-1&&grid[i][j+1]=='1'){
        grid[i][j+1]=0;
        dfs(grid,i,j+1);
    }

}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    counter++;
                }
            }
        }
        return counter;
    }
};
