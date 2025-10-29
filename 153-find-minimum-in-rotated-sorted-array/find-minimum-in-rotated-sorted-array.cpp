class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int min=nums[low];
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<min){
                min=nums[mid];
            }
            // left sorted
            if(nums[low]<=nums[mid]){
                if(nums[low]<min){
                    min=nums[low];
                }
                low=mid+1;
            }
            // right sorted
            else{
                if(nums[mid]<min){
                    min=nums[mid];
                }
                high=mid-1;
            }
        }
        return min;
    }
};