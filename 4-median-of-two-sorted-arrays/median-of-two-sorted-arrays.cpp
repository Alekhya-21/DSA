class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int i=0,j=0;
    int count=0;
    int n1=nums1.size();
    int n2=nums2.size();
    int ind1=((n1+n2)/2)-1;
    int ind2=(n1+n2)/2;
    int v1,v2;
    while(i<n1 && j<n2){
        if(nums1[i]<nums2[j]){
            if(count==ind1) v1=nums1[i];
            if(count==ind2) v2=nums1[i];
            i++;
        }
        else{
            if(count==ind1) v1=nums2[j];
            if(count==ind2) v2=nums2[j];
            j++;
        }
        count++;
    }
    while(i<n1){
        if(count==ind1) v1=nums1[i];
        if(count==ind2) v2=nums1[i];
        i++;
        count++;
    }
    while(j<n2){
        if(count==ind1) v1=nums2[j];
        if(count==ind2) v2=nums2[j];
        j++;
        count++;
    }
    if((n1+n2)%2==0){
        return double(v1+v2)/2.0;
    }
    else{
        return v2;
    }
    }
};