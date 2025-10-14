class Solution {
public:
    int reverseBits(int n) {
    vector<int> arr;
    while(n>0){
        arr.push_back(n&1);
        n=n>>1;
    }
    // while(arr.size()<32){
    //     arr.push_back(0);
    // }
    unsigned int res=0;
    for(int i=arr.size()-1;i>=0;i--){
        unsigned int temp=pow(2,31-i);
        res+=temp*arr[i];
    }
    return res;
    }
};