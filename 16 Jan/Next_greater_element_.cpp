//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template for C++ solution

class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
       vector<long long>ans;
       stack<int>st;
       for(int i = 0 ; i <  n ; ++i){
           if(st.empty()){
               st.push(arr[i]);
           }
           else{
               while(!st.empty() && st.top()<arr[i]){
                   ans.push_back(arr[i]);
                   st.pop();
               }
               st.push(arr[i]);
               
           }
       }
       while(!st.empty()){
           ans.push_back(-1);
           st.pop();
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
        
        vector <long long> res = ob.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends
