class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> arr;
    for(int i=0;i<nums1.size();i++){
        auto it=find(nums2.begin(),nums2.end(),nums1[i]);
        int pos=it-nums2.begin();
        if(pos==nums2.size()-1){
            arr.push_back(-1);
        }
        int low=pos;
        int high=pos+1;
        for(int j=pos;high<nums2.size();j++){
            if(nums2[high]>nums2[low]){
                arr.push_back(nums2[high]);
                break;
            }
            else if(high==nums2.size()-1){
                arr.push_back(-1);
                break;
            }
            high++;   
            }
    }
    return arr; 
    }
};