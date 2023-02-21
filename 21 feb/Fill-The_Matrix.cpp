//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    // void dfs(int ind)
    int minIteration(int N, int M, int x, int y){    
        // code here
        N++;
        M++;
        queue<pair<int,int>>q;
        vector<vector<int>>grid(N,vector<int>(M,0));
        q.push({x,y});
        int count = 0 ;
        N--;
        M--;
        grid[x][y] = 1;
        while(!q.empty()){
            int sz = q.size();
            for(int i = 0 ;i < sz ; ++i){
                auto p = q.front();
                int x = q.front().first;

            int y = q.front().second;

                q.pop();
                
            if (x > 1 && grid[x - 1][y] == 0)

            {

                q.push({x - 1, y});

                grid[x - 1][y] = 1;

            }

            // check for left

            if (y > 1 && grid[x][y - 1] == 0)

            {

                q.push({x, y - 1});

                grid[x][y - 1] = 1;

            }

            // check for down

            if (x < N && grid[x + 1][y] == 0)

            {

                q.push({x + 1, y});

                grid[x + 1][y] = 1;

            }

            // check for right

            if (y < M && grid[x][y + 1] == 0)

            {

                q.push({x, y + 1});

                grid[x][y + 1] = 1;

            }

        }

        if (!q.empty())

            count++;
            }
        
        return count ;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
