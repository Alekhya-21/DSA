int addDigits(int num) {
    if(num<=9){
        return(num);
    }
    int sum=0;
    while(num>9){
        sum=0;
        while(num>0){
            int r=num%10;
            sum=sum+r;
            num=num/10;
        }
        num=sum;
    }
    return(sum);
}