class Solution {
public:
    int calPoints(vector<string>& operations) {
    vector<int> arr;
    int sum=0;
    for(int i=0;i<operations.size();i++){
        if(isdigit(operations[i][0]) || operations[i][0]=='-'){
            arr.push_back(stoi(operations[i]));
        }
        else{
            if(operations[i][0]=='C'){
                arr.pop_back();
            }
            else if(operations[i][0]=='D'){
                int temp=arr.back()*2;
                arr.push_back(temp);
            }
            else{
                arr.push_back(arr[arr.size()-1]+arr[arr.size()-2]);
            }
        }
    }
    for(int i:arr){
        sum+=i;
    }
    return sum;
    }
};