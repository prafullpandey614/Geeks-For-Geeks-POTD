//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i :arr) pq.push(i);
        long long int sum = 0 ;
        while(!pq.empty()){
            if(pq.size()>=2){
                 int k = pq.top();pq.pop();
                 int l = pq.top();pq.pop();
                 pq.push(k+l);
                 sum+=k+l;
            }
            if(pq.size()==1) return sum;
           
            
        }
        return sum ;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << "\n";
    }
}
// } Driver Code Ends
