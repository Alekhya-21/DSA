bool isHappy(int n) {
    if(n==1){
        return 1;
    }
    while(n>9){
        int sum=0;
        while(n>0){
            int r=n%10;
            sum=sum+(r*r);
            n=n/10;
        }
        n=sum;
    }
    if(n==1 | n==7){
        return 1;
    }
    if(n>1 & n<10){
        return 0;
    }
    return -1;
}