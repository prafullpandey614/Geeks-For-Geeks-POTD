//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    
    vector<int> leastPrimeFactor(int n) {
        // code here
        vector<int>primes(n+1,-1);
        primes[0]= 0 ;
        primes[1] = 1;
        for(int i =2 ;i<=n ; ++i){
            if(primes[i]==-1){
                for(int j = i ; j<=n ; j+=i){
                    if(primes[j]==-1){
                        primes[j] = i ;
                    }
                }
            }
        }
        return primes ;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends
