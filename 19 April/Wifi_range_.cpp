   int flag=0;
        bool first=true;
        for(int i=0;i<N;i++){
            if(S[i]=='1' && first){
                flag=i;
                if((i-x)>0)return false;
                first=false;
            }
            else if(S[i]=='1'){
                if((i-x)>(flag+x+1)){
                    return false;
                }
                flag=i;
            }
            
        }
        if((flag+x+1)<N)return false;
        return true;
