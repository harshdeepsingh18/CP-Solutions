
class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        
        int first=k-1;
        int last=n-k;
        swap(arr[first],arr[last]);
        
    }
};
