bool isPowerOfThree(int n) {
    if(n==1){
        return 1;
    }
    for(int i=1;i<32;i++){
        if(pow(3,i)==n){
            return 1;
        }
    }
    return 0;
}