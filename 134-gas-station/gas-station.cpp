class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int total_gas=0,total_cost=0;
    for(int i=0;i<gas.size();i++){
        total_gas+=gas[i];
        total_cost+=cost[i];
    }
    if(total_gas<total_cost){
        return -1;
    }
    int total=0;
    int starting_index=0;
    for(int i=0;i<gas.size();i++){
        total+=(gas[i]-cost[i]);
        if(total<0){
            starting_index=i+1;
            total=0;
        }
    }
    return starting_index;
    }
};