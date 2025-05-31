class Solution {
public:
    int addDigits(int num) {
    if(num>=0 && num<10){
        return num;
    }
    while(num>9){
        int sum=0;
        while(num>0){
            int r=num%10;
            sum+=r;
            num=num/10;
        }
        num=sum;
    }
    return num;
    }
};