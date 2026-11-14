class Solution {
public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        for(int i = 0; i < arr.size(); i++) {

            int num = arr[i];
            int original = num;
            int reverse = 0;

            while(num > 0) {
                int digit = num % 10;
                reverse = reverse * 10 + digit;
                num = num / 10;
            }

            if(original != reverse) {
                return false;
            }
        }

        return true;
    }
};