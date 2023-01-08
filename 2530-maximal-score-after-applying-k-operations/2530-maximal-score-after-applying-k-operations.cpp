#include <iostream>
#include <cmath>
class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        
        for(int i=0;i<nums.size();i++) {
            pq.push(nums[i]);
        }
        long long score = 0;

        while(k--) {
            double top = pq.top();
            pq.pop();
            int add = ceil(double(top/3));
            score += top;
            pq.push(add);            
        }
        return score;
    }
};