class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n=gas.size();
        int current_fuel = 0,start=0;
        int tot_fuel=0,tot_cost=0;
        for(int i=0;i<n;i++){
            tot_fuel+=gas[i];
            tot_cost+=cost[i];
        }
        if(tot_fuel<tot_cost) return -1;
        for(int i=0;i<n;i++){
            current_fuel += gas[i] - cost[i];
            
            if(current_fuel<0){
                start = i+1;
                current_fuel=0;
            }
        }
        return start;
    }
};