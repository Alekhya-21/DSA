class Solution {
public:
    bool checkPerfectNumber(int num) {
    int sum=0;
    int l=num/2;
    for(int i=1;i<=l;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        return 1;
    }
    return 0;
    }
};