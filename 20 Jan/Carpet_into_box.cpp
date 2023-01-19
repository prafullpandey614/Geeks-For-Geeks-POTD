class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
      //code here
        int maxb = max(C,D);
        int minb = min(C,D);
        int cnt = 0;
        int minc = min(A,B);
        int maxc = max(A,B);
        int temp1,temp2;
        while(true){
            if(minc<=minb && maxc<=maxb) break;
            cnt++;
            if(maxc > maxb){
                temp1 = maxc/2;
                temp2 = minc;
            }else{
                temp1 = minc/2;
                temp2 = maxc;
            }
            maxc = max(temp1,temp2);
            minc = min(temp1,temp2);
        }
        return cnt;
    }
};
