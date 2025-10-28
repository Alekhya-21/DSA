class Solution {
public:
    int lower_bound(vector<int>& nums, int target,int low,int high){
        int lower=nums.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                lower=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return lower;
    }
    int upper_bound(vector<int>& nums, int target,int low,int high){
        int upper=nums.size();
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>target){
                upper=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return upper;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1,last=-1;
        if(nums.empty()){
            return {-1,-1};
        }
        int low=0,high=nums.size()-1;
        int lb=lower_bound(nums,target,low,high);
        int ub=upper_bound(nums,target,low,high)-1;
        if(lb==nums.size() || nums[lb]!=target){
            return {-1,-1};
        }
        return {lb,ub};
    }
};