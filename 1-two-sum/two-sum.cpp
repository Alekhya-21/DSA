class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int low=0,high=nums.size()-1;
        int sum=0;
        while(low<high){
            sum=arr[low].first+arr[high].first;
            if(sum==target){
                return {arr[low].second,arr[high].second};
            }
            else if(sum<target){
                low++;
            }
            else{
                high--;
            }
        }
        return {};
    }
};