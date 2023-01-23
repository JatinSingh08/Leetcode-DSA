class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size() == 0 && n==1) return 1;
        
        vector<int> out(n+1,0);
        vector<int> in(n+1,0);
        
        for(auto t: trust) {
            out[t[0]]++;
            in[t[1]]++;
        }
        for(int i=0;i<=n;i++) {
            if(out[i] == 0 && in[i]==n-1) return i;
        }
        return -1;
    }
};