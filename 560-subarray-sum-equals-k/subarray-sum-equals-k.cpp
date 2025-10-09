class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int high=0;
    int prefix_sum=0;
    int count=0;
    map<int,int> mp;
    while(high<nums.size()){
        prefix_sum+=nums[high];
        if(prefix_sum==k){
            count++;
        }
        if(mp.find(prefix_sum-k)!=mp.end()){
            count+=mp[prefix_sum-k];
        }
        mp[prefix_sum]++;
        high++;
    }
    return count;
    }
};