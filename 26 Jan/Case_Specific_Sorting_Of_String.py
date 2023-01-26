#User function Template for python3

class Solution:

    #Function to perform case-specific sorting of strings.
    def caseSort(self,s,n):
        upp = []
        low = []
        for i in s:
            if i.isupper():
                upp.append(i)
            else :
                low.append(i)
        upp = sorted(upp)
        low=  sorted(low)
        j = 0 
        k = 0 
        res = []
        for i in s:
            if i.isupper():
                res.append(upp[j])
                j+=1
            else :
                res.append(low[k])
                k+=1
        p = ""
        return  p.join(res)
        # return str(res)
        
        #code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for tt in range(t):
        n=int(input())
        s=str(input())
        print(Solution().caseSort(s,n))
# } Driver Code Ends
