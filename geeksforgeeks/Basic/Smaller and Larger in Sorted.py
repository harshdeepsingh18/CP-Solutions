class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        // code here
       int less=0;
       int more=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=target){
            less++;
        }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=target){
                more++;
            }
        }
        return {less,more}; 
    }
};