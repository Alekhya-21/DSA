class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    // Approach 1(linear search)
    // int i=0,j=0;
    // int count=0;
    // int n1=nums1.size();
    // int n2=nums2.size();
    // int ind1=((n1+n2)/2)-1;
    // int ind2=(n1+n2)/2;
    // int v1,v2;
    // while(i<n1 && j<n2){
    //     if(nums1[i]<nums2[j]){
    //         if(count==ind1) v1=nums1[i];
    //         if(count==ind2) v2=nums1[i];
    //         i++;
    //     }
    //     else{
    //         if(count==ind1) v1=nums2[j];
    //         if(count==ind2) v2=nums2[j];
    //         j++;
    //     }
    //     count++;
    // }
    // while(i<n1){
    //     if(count==ind1) v1=nums1[i];
    //     if(count==ind2) v2=nums1[i];
    //     i++;
    //     count++;
    // }
    // while(j<n2){
    //     if(count==ind1) v1=nums2[j];
    //     if(count==ind2) v2=nums2[j];
    //     j++;
    //     count++;
    // }
    // if((n1+n2)%2==0){
    //     return double(v1+v2)/2.0;
    // }
    // else{
    //     return v2;
    // }

    // Approach 2(binary search)
    int n1=nums1.size();
    int n2=nums2.size();
    // first array should always be smaller
    if(n1>n2) return findMedianSortedArrays(nums2,nums1);
    int total_len=n1+n2;
    double median;
    int pick_len=(n1+n2+1)/2;
    int low=0,high=n1;
    while(low<=high){
        int mid=(low+high)/2;
        int mid1=mid;
        int mid2=pick_len-mid1;
        int l1 = (mid1 == 0)?INT_MIN:nums1[mid1-1];
        int l2 = (mid2 == 0)?INT_MIN:nums2[mid2-1];
        int r1 = (mid1 == n1)?INT_MAX:nums1[mid1];
        int r2 = (mid2 == n2)?INT_MAX:nums2[mid2];
        if(l1<=r2 && l2<=r1){
            if(total_len%2==0){
                median= (max(l1,l2)+min(r1,r2))/2.0;
            }
            else{
                median= max(l1,l2);
            }
            return median;
        }
        else if(l1>r2)high=mid-1;
        else low=mid+1;
    }
    return median;
    }
};