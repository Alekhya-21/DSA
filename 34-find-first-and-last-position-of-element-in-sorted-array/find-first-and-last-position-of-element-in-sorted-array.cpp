class Solution {
public:
    // way 1
    // int lower_bound(vector<int>& nums, int target,int low,int high){
    //     int lower=nums.size();
    //     while(low<=high){
    //         int mid=(low+high)/2;
    //         if(nums[mid]>=target){
    //             lower=mid;
    //             high=mid-1;
    //         }
    //         else{
    //             low=mid+1;
    //         }
    //     }
    //     return lower;
    // }
    // int upper_bound(vector<int>& nums, int target,int low,int high){
    //     int upper=nums.size();
    //     int mid;
    //     while(low<=high){
    //         mid=(low+high)/2;
    //         if(nums[mid]>target){
    //             upper=mid;
    //             high=mid-1;
    //         }
    //         else{
    //             low=mid+1;
    //         }
    //     }
    //     return upper;
    // }

    // way 2
    int first_pos(vector<int>& nums, int target){
        int first=-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first;
    }
    int second_pos(vector<int>& nums, int target){
        int second=-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                second=mid;
                low=mid+1;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return second;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        // way 1 -T(n)- 2 O(log n)
        // int first=-1,last=-1;
        // if(nums.empty()){
        //     return {-1,-1};
        // }
        // int low=0,high=nums.size()-1;
        // int lb=lower_bound(nums,target,low,high);
        // int ub=upper_bound(nums,target,low,high)-1;
        // if(lb==nums.size() || nums[lb]!=target){
        //     return {-1,-1};
        // }
        // return {lb,ub};

        // way 2 -T(n)- 2 O(log n)
        int f=first_pos(nums,target);
        int l=second_pos(nums,target);
        return {f,l};
    }
};