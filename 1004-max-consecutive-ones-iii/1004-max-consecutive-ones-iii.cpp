class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,zeroCnt=0;
        int maxOne = INT_MIN;
        while(j<nums.size()) {
            if(nums[j] == 0) {
                zeroCnt++;
            } 
            while(zeroCnt > k) {
                if(nums[i] == 0) {
                    zeroCnt--;
                }
                i++;
            }
            maxOne = max(maxOne, j-i+1);
            j++;
        }
        return maxOne;
    }
};