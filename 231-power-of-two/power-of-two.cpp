class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i = 0; i<31; i++){
            int sample = pow(2,i);
            if (sample == n){
                return true;
            }
            
        }
        return false;
        
    }
};