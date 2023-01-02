class Solution {
public:
    bool detectCapitalUse(string word) {
        int upperCnt = 0;
        if(word.size() == 1) return true;
        
        for(int i=0;i<word.size();i++) {
            if(isupper(word[i])) upperCnt++;
        }
        
        if(upperCnt == 1 && isupper(word[0])) return true;
        else if(upperCnt == word.size()) return true;
        else if(upperCnt == 0) return true;
        
        else return false;
    }
};