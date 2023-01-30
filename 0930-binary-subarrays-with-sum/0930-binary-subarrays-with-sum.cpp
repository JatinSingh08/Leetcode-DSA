class Solution {
    int atmostSubarrays(vector<int>& nums,int goal) {
        int i=0,j=0,sum=0,res=0;
        while(j<nums.size()) {
            if(goal < 0) return 0;
            sum += nums[j];
            
            while(sum>goal) {
                sum-=nums[i];
                i++;
            }
            res+=(j-i+1);
            j++;
        }
        return res;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmostSubarrays(nums,goal) - atmostSubarrays(nums,goal-1);
    }
};