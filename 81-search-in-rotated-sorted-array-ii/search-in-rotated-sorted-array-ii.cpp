// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {
//         int low=0;
//         int high=nums.size()-1;
//         while(low<=high){
//             int mid=(low+high)/2;
//             if(nums[mid]==target) return 1;
//             // trim down if nums[low]=nums[mid]=nums[high]
//             if(nums[low]==nums[mid] && nums[mid]==nums[high]){
//                 low++;
//                 high--;
//                 continue;
//             }
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
//         return 0;
//     }
// };


class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int low=0;
        int high=arr.size()-1;
        int flag=false;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                flag=true;
                return flag;
            }
            if(arr[low]==arr[mid] && arr[high]==arr[mid]){
                low++;
                high--;
                continue;
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
        return flag;
    }
};

















