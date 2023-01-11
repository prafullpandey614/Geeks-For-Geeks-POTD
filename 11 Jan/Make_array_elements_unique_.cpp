//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        sort(arr.begin(),arr.end());
        // priority_queue<int>st;
        map<int,int>mp;
        for(auto x:arr) mp[x]++;
        if(mp.size()==N) return 0;
        int cnt = 0;
        for(auto x:mp){
            while(x.second>1){
                // mp[x.first]--;
                int k = x.first ;
                x.second--;
                mp[k+1]++;
                cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minIncrements(arr, N) << endl;
    }
}
// } Driver Code Ends
