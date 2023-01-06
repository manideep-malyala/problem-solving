class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int k = 0, ans = 0;
        int n = s.size();
        for(int i=n-1; i>=0; i--) {
            if (s[i]==' ') {
                k++; 
            } else break;
        } 

        for (int i=(n-k)-1; i>=0 ; i--){
            if (isalpha(s[i])) {
                ans+=1;
            } else break;
        }
      return ans;
  
    }
};
