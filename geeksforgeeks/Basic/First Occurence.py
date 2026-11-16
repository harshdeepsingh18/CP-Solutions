class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
        int  pos=txt.find(pat);
        
        if(pos==string::npos){
            return -1;
        }
        return pos;
    }
};