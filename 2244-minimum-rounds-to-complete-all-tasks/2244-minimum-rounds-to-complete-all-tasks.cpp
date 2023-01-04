class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        int round = 0;
        for(int i=0;i<tasks.size();i++) {
            mp[tasks[i]]++;
        }
        for(auto x: mp) {
            if(x.second == 1) return -1;
            else if(x.second == 2) round++;
            else if(x.second % 3 == 0) round += (x.second / 3);
            else if(x.second % 3 == 1 || x.second % 3 == 2) round += (x.second / 3 + 1);
        
        }
        return round;
    }
};