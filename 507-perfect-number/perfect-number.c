bool checkPerfectNumber(int num) {
    int half=num/2;
    int t=num;
    int count=0;
    for(int i=1;i<=half;i++){
        if(num%i==0){
            count+=i;
        }
    }
    if(count==t){
        return 1;
    }
    else{
        return 0;
    }
}