class Solution {
  public:
    int binarySubstring(string& s) {
        // code here
         int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
        
        }
        return count*(count-1)/2;
    }
};