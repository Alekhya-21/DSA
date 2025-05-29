int hammingDistance(int x, int y) {
    int res=x^y;
    int count=0;
    while(res>0){
        int r=res%2;
        if(r==1){
            count++;
        }
        res=res/2;
    }    
    return count;
}