class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int total_gas=accumulate(gas.begin(),gas.end(),0);
    int total_cost=accumulate(cost.begin(),cost.end(),0);
    if(total_gas<total_cost){
        return -1;
    }
    int total=0;
    int start_index=0;
    for(int i=0;i<gas.size();i++){
        total=total+gas[i]-cost[i];
        if(total<0){
            start_index=i+1;
            total=0;
        }
    }
    return start_index;

















        // // eliminate if the total gas is lesser than the total cost it can never achieve
        // int total_gas=accumulate(gas.begin(),gas.end(),0);
        // int total_cost=accumulate(cost.begin(),cost.end(),0);
        // if(total_gas<total_cost){
        //     return -1;
        // }
        // int start_index=0;
        // int total=0;
        // for(int i=0;i<gas.size();i++){
        //     total+=gas[i]-cost[i];
        //     // if the value is negative, simply discard the index and move the 
        //     // start index and reset the value
        //     if(total<0){
        //         start_index=i+1;
        //         total=0;
        //     }
        // }
        // return start_index;
    }
};