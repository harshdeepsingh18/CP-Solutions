class Solution {
  public:
    string getEvenCharacters(string &s) {
        // code here
        string ans="";
        for(int i=0;i<s.length();i+=2){
            ans=ans+s[i];
        }
        return ans;
    }
};