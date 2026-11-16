class Solution {
  public:
    string concatenatedString(string &s1, string &s2) {
        //  code here
        int freq1[26]={0};
        int freq2[26]={0};
        for(int i=0;i<s1.size();i++){
            freq1[s1[i]-'a']=1;
        }
        for(int i=0;i<s2.size();i++){
            freq2[s2[i]-'a']=1;
        }
        string ans="";
        
        for(int i=0;i<s1.size();i++){
             if(freq2[s1[i] -'a']==0){
                 ans=ans+s1[i];
             }
             
        }         
                     
          for(int i=0;i<s2.size();i++){
                   if(freq1[s2[i] -'a']==0){
                 ans=ans+s2[i];
             }
             
             
            }
            if(ans==""){
                return "-1";
            }
            
            return ans;
    }
};