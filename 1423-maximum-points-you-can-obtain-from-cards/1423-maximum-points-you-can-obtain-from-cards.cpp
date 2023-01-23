class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int res = 0;
        int n = cardPoints.size();
        for(int i=0;i<k;i++) res+=cardPoints[i];
        
        int curr = res;
        for(int i=k-1;i>=0;i--) {
            curr -= cardPoints[i]; //removing last visited element
            curr += cardPoints[n-k+i]; //adding the new element from last
                
            res = max(res, curr);
        }
        return res;
    }
};