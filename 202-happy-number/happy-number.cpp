class Solution {
public:
    bool isHappy(int n) {
    while(n>9){
        int b=0;
        while(n>0){
            int r=n%10;
            b=b+r*r;
            n=n/10;
        }
        n=b;
    }
    if(n==1 || n==7){
        return 1;
    }
    return 0;
    }
};