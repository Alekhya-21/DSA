class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=1;
        int high=nums.size()-2;
        int n=nums.size();
        if(n==1){return 0;}
        if(nums.size()>1 && nums[0]>nums[1])return 0;
        if(nums.size()>1 && nums[n-1]>nums[n-2])return n-1;
        int res;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            res=mid;
            }
            // check if it in increasing or decreasing order
            if(nums[mid]<nums[mid-1])high=mid-1;
            else low=mid+1;
        }
        return res;
    }
};