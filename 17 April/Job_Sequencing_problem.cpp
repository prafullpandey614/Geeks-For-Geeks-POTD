// your code here
        int maxi=0;
        priority_queue<pair<int,int>>maxHeap;
        for(int i=0;i<n;i++){
            maxHeap.push({arr[i].profit,arr[i].dead});
            maxi=max(maxi,arr[i].dead);
        }
        
        vector<int>visited(n,0);
        int count=0;
        int totalProfit=0;
        while(!maxHeap.empty() && count<n){
            int profit=maxHeap.top().first;
            int deadline=maxHeap.top().second-1;
            maxHeap.pop();
            
            while(deadline>=0 && visited[deadline]==1){
                deadline--;
            }
            
            if(deadline>=0){
                count++;
                visited[deadline]=1;
                totalProfit+=profit;
            }  
        }
        
        return {count,totalProfit};
