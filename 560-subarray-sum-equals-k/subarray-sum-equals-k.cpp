class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixSum;
        prefixSum[0]=1;
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int remove=sum-k;
            count+=prefixSum[remove];
            prefixSum[sum]++;
        }
        return count;
    }
};