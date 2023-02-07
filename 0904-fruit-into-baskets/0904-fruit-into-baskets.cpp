class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> counter;
        int i=0,j=0;
        for( ;j<fruits.size();j++) {
            counter[fruits[j]]++;
            
            if(counter.size() > 2) {
                if(--counter[fruits[i]] ==0) counter.erase(fruits[i]);
                
                i++;
            }
        }
        return j-i;
    }
};