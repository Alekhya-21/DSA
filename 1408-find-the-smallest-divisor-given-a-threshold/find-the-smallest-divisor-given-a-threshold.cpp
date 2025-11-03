class Solution {
    int func(vector<int>& nums, int mid){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=ceil((double)nums[i]/mid);
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
    int low=1;
    int high=*max_element(nums.begin(),nums.end());
    int ans=high;
    while(low<=high){
        int mid=(low+high)/2;
        int sum=func(nums,mid);
        if(sum<=threshold){
            if(mid<ans) ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
    }
};