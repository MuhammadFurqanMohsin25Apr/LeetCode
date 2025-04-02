class Solution {
    public:
        bool isPowerOfTwo(int n) {
            int m=0;
            while(m!=30){
                if(pow(2,m)==n){
                    return true;
                }
                m++;
            }
            return false;
        }
    };
