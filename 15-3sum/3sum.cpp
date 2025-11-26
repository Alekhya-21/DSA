class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=(nums.size()-3);i++){
            int low=i+1;
            int high=nums.size()-1;
            while(low<high){
                int sum=nums[i]+nums[low]+nums[high];
                if(sum==0){
                    arr.insert({nums[i],nums[low],nums[high]});
                    low++;
                    high--;
                }
                else if(sum>0){
                    high--;
                }
                else{
                    low++;
                }
            }
        }
        return vector<vector<int>>(arr.begin(),arr.end());
    }
};