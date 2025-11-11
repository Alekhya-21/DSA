// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int lowest=nums.size();
//         int low=0;
//         int high=nums.size()-1;
//         while(low<=high){
//             int mid=(low+high)/2;
//             if(nums[mid]>=target){
//                 lowest=mid;
//                 high=mid-1;
//             }
//             else{
//                 low=mid+1;
//             }
//         }
//         return lowest;
//     }
// };




class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int lowest=arr.size();
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=target){
                lowest=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return lowest;
    }
};
















