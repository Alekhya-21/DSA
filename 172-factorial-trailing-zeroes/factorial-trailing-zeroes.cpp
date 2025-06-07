class Solution {
public:
    int trailingZeroes(int n) {
    int i=5;
    int count=0;
    while((n/i)>0){
        count=count+n/i;
        i*=5;
    }
    return count;
    }
};