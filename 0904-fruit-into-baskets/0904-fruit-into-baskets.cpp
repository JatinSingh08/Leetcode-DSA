class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> counter;
        int i=0,j=0;
        int res = INT_MIN;
        while(j<fruits.size()) {
            counter[fruits[j]]++;

            if(counter.size() > 2) {
                counter[fruits[i]]--;
                if(counter[fruits[i]]==0) counter.erase(fruits[i]);
                
                i++;
            }
            res = max(res,j-i+1);
            j++;
        }
        return res;
    }
};