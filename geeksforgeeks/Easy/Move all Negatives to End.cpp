class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        vector<int> ans(arr.size());
        int j=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0){
                ans[j]=arr[i];
                j++;
            }
        }
        for(int i = 0; i < arr.size(); i++) {
                    if(arr[i] < 0) {
                        ans[j]=arr[i];
                         j++;
                    }
                    
        }        
        for(int i=0;i<arr.size();i++){
            arr[i]=ans[i];
        }
    }
};