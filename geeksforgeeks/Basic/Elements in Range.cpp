class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // code here
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=start && arr[i]<=end){
                ans.push_back(arr[i]);
            }
        }
        if(ans.size()==end-start+1){
            return true;
        }
        return false;
    }
};
