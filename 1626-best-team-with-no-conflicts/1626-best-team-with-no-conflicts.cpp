class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>> arr;
        int n = scores.size();
        int ans = 0;
        for(int i=0;i<n;i++) arr.push_back({ages[i],scores[i]});
        sort(arr.begin(),arr.end(),greater<>());
        vector<int> dp(n,0);
        for(int i=0;i<n;i++) {
            int score = arr[i].second;
            dp[i] = score;
            for(int j=0;j<i;j++) {
                if(arr[j].second >= arr[i].second) {
                    dp[i] = max(dp[i],dp[j]+score);
                }
            }
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};