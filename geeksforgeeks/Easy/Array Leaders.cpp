class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int> ans;
    
    int maximum=arr[arr.size()-1];
    ans.push_back(maximum);
    
    for(int i=arr.size()-2;i>=0;i--){
        if(arr[i]>=maximum){
            ans.push_back(arr[i]);
            maximum=arr[i];
        }
    }
      reverse(ans.begin(), ans.end());
        return ans;
    }
};