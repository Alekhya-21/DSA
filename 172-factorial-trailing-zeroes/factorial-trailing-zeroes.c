int trailingZeroes(int n) {
    if(n==0 || n==1){
        return(0);
    }
    int count=0;
    int j=0;
    for(int i=5;j<n;i*=5){
        if(n/i>0){
            count+=n/i;
        }
        else{
            return(count);
        }
        j++;
    }
    return -1;
}