class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>0){
            for(int i=0;i<=32;i++){
                if(pow(2,i)==n){
                    return 1;
                }
            }
        }
        return 0;
    }
};