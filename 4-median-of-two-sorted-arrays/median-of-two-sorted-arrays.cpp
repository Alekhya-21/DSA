class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double res;
    int l=nums1.size()+nums2.size();
    vector<int> nums3(l);
    merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums3.begin());
    sort(nums3.begin(),nums3.end());
    if(l%2==0){
        res=double(nums3[l/2]+nums3[(l/2)-1])/2;
    }
    else{
        res=nums3[(nums1.size()+nums2.size())/2];
    }
    return res;
    }
};