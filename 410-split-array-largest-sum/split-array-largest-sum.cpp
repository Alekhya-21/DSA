class Solution {
public:
    int func(vector<int> &nums,int maxPages){
        int studentCount=1;
        int pagesHold=0;
        for(int i=0;i<nums.size();i++){
            if(pagesHold+nums[i]<=maxPages){
                pagesHold+=nums[i];
            }
            else{
                pagesHold=nums[i];
                studentCount++;
            }
        }
        return studentCount;
    }
    int splitArray(vector<int>& nums, int k) {
        if(k>nums.size()) return -1;
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            int studentCount=func(nums,mid);
            if(studentCount<=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};