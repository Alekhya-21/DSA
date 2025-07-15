class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> res(nums1.size());
    for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            if(nums1[i]==nums2[j]){
                int high=j+1;
                bool flag=false;
                while(high<nums2.size()){
                    if(nums2[high]>nums2[j]){
                        res[i]=nums2[high];
                        flag=true;
                        break;
                    }
                    high++;
                }
                if(!flag){
                    res[i]=-1;
                }
            }
        }
    }
    return res;

    // vector<int> arr;
    // for(int i=0;i<nums1.size();i++){
    //     auto it=find(nums2.begin(),nums2.end(),nums1[i]);
    //     int pos=it-nums2.begin();
    //     if(pos==nums2.size()-1){
    //         arr.push_back(-1);
    //     }
    //     int low=pos;
    //     int high=pos+1;
    //     for(int j=pos;high<nums2.size();j++){
    //         if(nums2[high]>nums2[low]){
    //             arr.push_back(nums2[high]);
    //             break;
    //         }
    //         else if(high==nums2.size()-1){
    //             arr.push_back(-1);
    //             break;
    //         }
    //         high++;   
    //         }
    // }
    // return arr; 
    }
};