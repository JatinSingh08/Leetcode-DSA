class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size() == 0 && n==1) return 1;
        vector<int> outdegree(n+1,0);
        vector<int> indegree(n+1,0);
        for(auto t : trust) {
            outdegree[t[0]]++;
            indegree[t[1]]++;
        }
        for(int i=0;i<=n;i++) {
            if(outdegree[i] == 0 && indegree[i]==n-1) return i;
        }
        return -1;
    }
};