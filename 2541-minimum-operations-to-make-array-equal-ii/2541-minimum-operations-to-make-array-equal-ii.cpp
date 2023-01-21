class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        long long n = nums1.size(), m = nums2.size();
        
        long long positiveDiff = 0;
        long long negativeDiff = 0;
        if(k==0) {
            if(nums1 == nums2) return 0;
            return -1;
        }
        for(int i=0;i<n;i++) {
            if(nums1[i] >= nums2[i]) positiveDiff += (nums1[i] - nums2[i]);
            else negativeDiff += (nums2[i] - nums1[i]);
        }
        long long ans = -1;
        if(positiveDiff == negativeDiff && positiveDiff % k ==0) {
            ans = positiveDiff/k;
            
        }
        return ans;
    }
};