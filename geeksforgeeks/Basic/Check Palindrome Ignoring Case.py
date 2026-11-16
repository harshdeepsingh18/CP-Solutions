class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int flag=true;
        int i=0;
        int j=s.size()-1;
        
        while(i<j){
            
            if(tolower(s[i])!=tolower(s[j])){
              flag=false;  
              break;
            }
            i++;
            j--;
        }
        return flag;
    }
};