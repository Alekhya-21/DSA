class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
    int count=0;
    for(int i=0;i<nums.size();i++){
        int sum=0;
        map<int,int> mp;
        for(int j=i;j<nums.size();j++){
            mp[nums[j]]++;
            sum+=nums[j];
            if(mp[sum]>0) count++;
        }
    }
    return count;
    }
};