class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int arrLen = strs.size();
        int strLen = strs[0].size();
        
        int dltCnt = 0;
        for(int i=0;i<strLen;i++) {
            for(int j=0;j<arrLen-1;j++) {
                 if(strs[j][i] > strs[j+1][i]) {
                     dltCnt++;
                     break;
                 }
            }
        }
        return dltCnt;
    }
};