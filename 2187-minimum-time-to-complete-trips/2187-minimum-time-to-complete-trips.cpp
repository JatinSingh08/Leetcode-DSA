class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l = 0, r = 1e14, ans = r;
        while(l<r) {
            long long mid = l + (r-l)/2;
            long long cnt = 0;
            for(int i=0;i<time.size();i++){
                cnt += (mid/time[i]);
            }
            if(cnt >= totalTrips) {
                ans = min(ans, mid);
                r = mid;
            }
            else l = mid + 1;
        }
        return ans;
    }
};