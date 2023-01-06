class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int maxIceCreams = 0;
        for(int i=0;i<costs.size();i++) {
            if(costs[i] <= coins) {
                maxIceCreams++;
                coins -= costs[i];
            }
            else {
                break;
            }
        }
        return maxIceCreams;
    }
};