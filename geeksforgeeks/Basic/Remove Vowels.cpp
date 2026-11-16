class Solution {
  public:
    string removeVowels(string& s) {
        // code here
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='a' &&
             s[i]!='i' &&
             s[i]!='e' &&
             s[i]!='u' &&
             s[i]!='o' ){
                  
                  ans.push_back(s[i]);
             }
            
            
        }
        return ans;
    }
};