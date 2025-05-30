class Solution {
public:
    bool isPalindrome(int x) {
    if(x<10 && x>=0){
        return 1;
    }
    if(x>1){
    int temp=x;
    long long b=0;
    while(x>0){
        int r=x%10;
        b=(b*10)+r;
        x=x/10;
    }
    return (temp==b);
    }
    return 0;
    }
};