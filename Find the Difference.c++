class Solution {
public:
    char findTheDifference(string s, string t) {
     char c=0;
      for(char s1:s)c^=s1;
      for(char s2:t)c^=s2;
        return c;
        
    }
};
