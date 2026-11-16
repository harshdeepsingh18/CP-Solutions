class Solution {
  public:
    string toLower(string& s) {
        // code here
         string ans="";
        for(int i=0;i<s.size();i++){
            ans.push_back(tolower(s[i]));
        }
        return ans;
    }
};