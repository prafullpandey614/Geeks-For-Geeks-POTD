class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        unordered_map<int,int>mp;
        long long count=0 ;
        for(int i = 0 ; i <  n ; ++i){
            int rem = arr[i]%k ;
            if(mp[rem]!=0) count+= mp[rem];
            mp[rem]++;
        }
        return count ;
    }
};
