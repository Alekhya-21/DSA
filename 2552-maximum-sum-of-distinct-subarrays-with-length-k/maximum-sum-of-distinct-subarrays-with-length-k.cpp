class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
    long long sum=0;
    long long max_sum=0;
    map<int,int> mp;
    for(int i=0;i<k;i++){
        mp[nums[i]]++;
        sum+=nums[i];
    }
    if(mp.size()==k) max_sum=sum;
    int low=0;
    int high=k;
    while(high<nums.size()){
        // remove left element
        mp[nums[low]]--;
        sum-=nums[low];
        if(mp[nums[low]]==0) mp.erase(nums[low]);
        // add right element
        mp[nums[high]]++;
        sum+=nums[high];
        // check if size=window size, then store the sum
        if(mp.size()==k) max_sum=max(max_sum,sum);
        low++;
        high++;
    }
    return max_sum;
    }
};