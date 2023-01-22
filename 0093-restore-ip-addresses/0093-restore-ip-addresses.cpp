class Solution {
     
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> temp;
        vector<string> Ips;
        getIpAddresses(temp,Ips,s,0);
        return Ips;
    }
    
    void getIpAddresses(vector<string> &temp, vector<string> &Ips, string &s, int index) {
        if(index == s.length() && temp.size() == 4 ) {
            string validIp = temp[0] +'.' + temp[1]+'.'+temp[2]+'.'+temp[3];
            Ips.push_back(validIp);
            return;
        }
        string tempStr = "";
        for(int i=index;i<s.length() && temp.size()<4;i++) {
            if(s[i] - '0' > 9 ) continue;
            tempStr += s[i];
            int tempInt = stoi(tempStr);
            if(tempInt>=0 && tempInt<=255) {
                temp.push_back(tempStr);
                getIpAddresses(temp, Ips,s,i+1);
                temp.pop_back();
            }
            if(tempInt<=0 || tempInt>255) break;
        }
        
    }
};