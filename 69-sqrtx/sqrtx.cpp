class Solution {
public:
    int mySqrt(int x) {
        // formula
        return sqrt(x);

        // using binary search
        int low=0;
        int high=x;
        while(low<=high){
            int mid=(low+high)/2;
            if(mid*mid==x)return mid;
            else if(mid*mid>x){
                high=low-1;
            }
            else{
                low=mid+1;
            }
        }
    }
};