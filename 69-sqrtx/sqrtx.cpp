// class Solution {
// public:
//     int mySqrt(int x) {
//         if(x==1 || x==0) return x;
//         int low=1;
//         int high=x;
//         int res=0;
//         while(low<=high){
//             long long mid=low+(high-low)/2;
//             if((mid*mid)==x){
//                 return mid;
//             }
//             else if(mid*mid<=x){
//                 res=mid;
//                 low=mid+1;
//             }
//             else{
//                 high=mid-1;
//             }
//         }
//         return res;
//     }
// };

class Solution {
public:
    int mySqrt(int x) {
        int low=1;
        int high=x;
        long res;
        if(x==0)return 0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid*mid==x){
                res=mid;
                return res;
            }
            else if(mid*mid<=x){
                res=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return res;
    }
};












