//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int mod = 1e9+7;
      vector<vector<int>>dp;
    int dfs(int i,int j,vector<vector<int>> &grid){
        int n = grid.size();
        int m = grid[0].size();
        
        if(i==n-1 && j==m-1 && grid[i][j]==1) return 1;
       
        if(dp[i][j]!=-1) return dp[i][j]%mod;
        int ways = 0 ;
        if(i+1<n && grid[i+1][j]==1)
        ways += dfs(i+1,j,grid);
        if(j+1<m && grid[i][j+1]==1)
        ways += dfs(i,j+1,grid);
        return dp[i][j] = (ways)%mod;
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
         dp=vector<vector<int>>(n,vector<int>(m,-1));
        if(grid[0][0]==0) return  0; 
        // memset(dp,-1,sizeof(dp));
        return dfs(0,0,grid)%mod;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends
