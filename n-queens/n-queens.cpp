class Solution {
public:
    void solve(int col ,vector<vector<string>> &ans,vector<string> &pattern,vector<int> &lrow ,
                 vector<int> &udiagonal ,vector<int> &ldiagonal, int n)
    {
        if(col==n){
            ans.push_back(pattern);
            return;
        }
        for(int row = 0 ; row< n ;row++){
            if(lrow[row]==0 && udiagonal[n-1+col-row]==0 && ldiagonal[row+col]==0){
                pattern[row][col]='Q';
                lrow[row]=1;
                udiagonal[n-1+col-row]=1;
                ldiagonal[row+col]=1;
                solve(col+1,ans , pattern , lrow , udiagonal , ldiagonal , n);
                pattern[row][col]='.';
                lrow[row]=0;
                udiagonal[n-1+col-row]=0;
                ldiagonal[row+col]=0;
            }
        }
    }    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> pattern(n);
        string s(n, '.');
        for(int i =0 ;i< n ;i++) pattern[i]=s;
        vector<int> lrow(n,0) , udiagonal(2*n-1 , 0) , ldiagonal(2*n-1 , 0);
        solve(0,ans , pattern , lrow , udiagonal , ldiagonal , n);
        return ans;
    }
};