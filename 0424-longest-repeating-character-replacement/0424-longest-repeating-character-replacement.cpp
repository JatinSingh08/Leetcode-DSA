class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int> mp;
        int res = 0;
        int i=0,j=0;
        int maxF = 0;
        while(j<s.size()) {
            mp[s[j]]++;
            maxF = max(maxF, mp[s[j]]);
            while( ((j-i+1) - maxF) > k ) {
                mp[s[i]]--;
                i++;
            }
            res = max(res, j-i+1);
            j++;
        }
        return res;
    }
};