class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
         string ans="";
        for(int i=0;i<arr.size();i++){
            if(arr[i].size()>ans.size()){
                ans=arr[i];
            }
        }
        return ans;
    }
};
