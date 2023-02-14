class Solution {
public:
    int countOdds(int low, int high) {
        int x = 0;
        if(high%2!=0 && low%2!=0) {
            x = (high-low+2)/2;
        }
        else if(high%2==0 && low%2==0) {
            x = (high-low)/2;
        }
        else if(high%2==0 && low%2!=0) {
            x = (high-low+1)/2;
        }
        else if(high%2!=0 && low%2==0) {
            x = (high-low+1)/2;
        }
        return x;
    }
};