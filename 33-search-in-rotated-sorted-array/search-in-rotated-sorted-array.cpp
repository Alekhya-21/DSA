// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int low=0;
//         int high=nums.size()-1;
//         while(low<=high){
//             int mid=(low+high)/2;
//             if(nums[mid]==target) return mid;
//             // left sorted
//             if(nums[low]<=nums[mid]){
//                 if(target<nums[mid] && target>=nums[low])high=mid-1;
//                 else low=mid+1;
//             }
//             // right sorted
//             else{
//                 if(target<=nums[high] && target>nums[mid]) low=mid+1;
//                 else high=mid-1;
//             }
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low=0;
        int high=arr.size()-1;
        int res=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                res=mid;
                return res;
            }
            // left sorted
            if(arr[low]<=arr[mid]){
                if(target<=arr[mid] && target>=arr[low]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            // right sorted
            else{
                if(target>=arr[mid] && target<=arr[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return res;
    }
};