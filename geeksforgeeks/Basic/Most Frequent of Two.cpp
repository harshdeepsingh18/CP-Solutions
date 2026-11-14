class Solution {
  public:
    int moreFrequent(vector<int>& arr, int x, int y) {
        // code here
        int Xcount=0;
        int Ycount=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                Xcount++;
            }
        }
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==y){
                Ycount++;
            }
            
        }
        if(Xcount>Ycount){
            return x;
        }
        else if(Ycount>Xcount){
            return y;
        }
        else{
            return min(x,y);
        }
        
    }
};