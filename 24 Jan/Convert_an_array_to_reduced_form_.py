class Solution:

	def convert(self,arr, n):
	    brr = [[arr[i],i] for i in range(n) ]
	    brr.sort()
	    for i in range(n):
	        arr[brr[i][1]] = i 
