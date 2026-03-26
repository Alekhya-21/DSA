class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==0){
                arr.insert({nums[i],nums[j],nums[k]});
                j++;
                k--;
            }
            else if(sum>0){
                k--;
            }
            else{
                j++;
            }
            }
        }
        return vector<vector<int>>(arr.begin(),arr.end());
    }
};