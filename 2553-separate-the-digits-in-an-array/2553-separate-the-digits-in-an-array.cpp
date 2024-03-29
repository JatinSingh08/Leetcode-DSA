class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(auto & it: nums) {
            string temp = to_string(it);
            for(auto & x: temp) {
                ans.push_back(x-'0');
            }
        }
        return ans;
    }
};