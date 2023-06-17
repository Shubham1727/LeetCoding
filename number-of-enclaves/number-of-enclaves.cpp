class Solution {
public:
     void dfs(vector<vector<int>>& grid,vector<vector<int>>& visited,int x,int y,int n,int m)
    {
        if(x<0 || x>=n || y<0 || y>=m || grid[x][y]==0 || visited[x][y])
        return ;

        visited[x][y]=1;

        dfs(grid,visited,x,y-1,n,m);
        dfs(grid,visited,x,y+1,n,m);
        dfs(grid,visited,x-1,y,n,m);
        dfs(grid,visited,x+1,y,n,m);
    }
    int numEnclaves(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int ans=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0 || i==n-1 || j==m-1)
                {
                    if(!visited[i][j] and grid[i][j])
                    {
                        dfs(grid,visited,i,j,n,m);
                    }
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!visited[i][j] and grid[i][j])
                {
                    ans++;
                }
            }
        }
        return ans;
    }   
};