class Solution {
public:
    vector<int> countBits(int n) {
    vector<int> res={0};
    for(int i=1;i<=n;i++){
        int count=0;
        int j=i;
        while(j>0){
            int r=j%2;
            if(r==1)count++;
            j=j/2;
        }
        res.push_back(count);
    }
    return res;
    }
};