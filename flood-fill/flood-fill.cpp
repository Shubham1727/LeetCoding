class Solution {
public:
void dfs(vector<vector<int>>& image,vector<vector<int>>& ans, int sr, int sc, int color , int initcolor,  int row[], int col[]){
    ans[sr][sc]=color;
    
    int n = image.size();
    int m = image[0].size();
    for(int i =0 ; i<4 ; i++){
            int nrow = sr + row[i];
            int ncol = sc + col[i];
        if(nrow>=0 && nrow <n && ncol>=0 && ncol < m && ans[nrow][ncol]!= color && image[nrow][ncol]== initcolor){
                 dfs(image , ans , nrow ,ncol , color , initcolor , row , col);
            }
    }

}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initcolor = image[sr][sc];
        vector<vector<int>> ans = image;
        int row[] = {-1,0,+1,0};
        int col[] = {0,+1,0,-1};
        dfs(image ,ans , sr ,sc , color , initcolor , row , col);
        return ans;
    }
};