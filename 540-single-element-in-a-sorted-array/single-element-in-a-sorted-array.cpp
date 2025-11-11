// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         int n=nums.size();
//         if(n==1)return nums[0];
//         if(nums[0]!=nums[1])return nums[0];
//         if(nums[n-1]!=nums[n-2])return nums[n-1];
//         int low=1,high=n-2;
//         int mid;
//         while(low<=high){
//             mid=(low+high)/2;
//             if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])return nums[mid];
//             // check for left
//             if(nums[mid]==nums[mid-1]){
//                 if(mid%2!=0)low=mid+1;
//                 else high=mid-1;
//             }
//             // check for right
//             else{
//                 if(mid%2!=0)high=mid-1;
//                 else low=mid+1;
//             }
//         }
//         return nums[mid];
//     }
// };


class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        if(n==1)return arr[0];
        if(n>1 && arr[0]!=arr[1])return arr[0];
        if(n>1 && arr[n-1]!=arr[n-2])return arr[n-1];
        int low=1,high=n-2;
        int res;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
                res= arr[mid];
                return res;
            }
            else if(arr[mid]==arr[mid-1]){
                if(mid%2==0){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(mid%2!=0){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
        }
        return res;
    }
};