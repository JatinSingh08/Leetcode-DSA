class Solution {
public:
    int func(string word1,string word2, int n, int m){
       int t[n+1][m+1];
        memset(t,-1,sizeof(t));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
               
                if(i==0){
                    t[i][j]=j;
                }
                else if(j==0){
                    t[i][j]=i;
                }
                else if(word1[i-1]==word2[j-1]){
                    t[i][j]=t[i-1][j-1]; 
                }
                else t[i][j]=1+min(t[i-1][j-1],min(t[i-1][j],t[i][j-1]));
            }
        }
        return t[n][m];
    }

    
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        int t[n+1][m+1];
        memset(t,-1,sizeof(t));
        return func(word1,word2,n,m);
    }
};