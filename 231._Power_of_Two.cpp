class Solution {
public:
    bool isPowerOfTwo(int n) {
        int m=0;
        int ans=1;
        while(m!=30){
            if(ans==n){
                return true;
            }
            ans=ans*2;
            m++;
        }
        return false;
    }
};
