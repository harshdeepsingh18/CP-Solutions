class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        // code here
        int oddCount=0;
        int evenCount=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0){
                evenCount++;
            }
                
        }
        for(int i=0;i<arr.size();i++){
             if(arr[i]%2!=0){
                oddCount++;
            }
        }
        return {oddCount,evenCount};
    }
};