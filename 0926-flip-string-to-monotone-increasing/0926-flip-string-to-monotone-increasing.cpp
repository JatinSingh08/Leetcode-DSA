class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n = s.size();
        
        int flip = 0, countOne = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '1') countOne++;
            if(s[i] == '0') {
                if(countOne > 0) {
                    flip++;
                }
            }
            if(countOne < flip) flip = countOne;

        }
        
        return flip;
    }
};