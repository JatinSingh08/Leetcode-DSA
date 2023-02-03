class Solution {
public:
    string convert(string s, int numRows) {
        int sz = s.size();
        if(numRows<=1) return s;
        
        vector<string> v(numRows,"");
        int j=0,gap=-1;
        for(int i=0;i<sz;i++) {
            if(j==numRows-1 || j==0) gap*=(-1);
            
            v[j]+=s[i];
            if(gap == 1) j++;
            else j--;
        }
        
        string res;
        for(auto& it: v) res+=it;
        
        return res;
    }
};