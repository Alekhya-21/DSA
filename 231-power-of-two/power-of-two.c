bool isPowerOfTwo(int n) {
    if(n<0){
        return 0;
    }
    for(int i=0;i<32;i++){
        int res=pow(2,i);
        if(n==res){
            return 1;
        }
    }  
    return 0;
}