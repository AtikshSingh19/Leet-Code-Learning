class Solution {
public:
    int reverse(int x) {
        int digit;
        int rev = 0;
        while (x!=0){
            digit = x%10;
            if (rev>INT_MAX/10 || rev < INT_MIN/10){      //start me check kiya taki int rev me bada value nhi aaye kabhi taki exceed na kree and error na aaye.
                return 0;
            }
            rev = 10*rev + digit;
            x=x/10;
        }
        return rev;
    }
};