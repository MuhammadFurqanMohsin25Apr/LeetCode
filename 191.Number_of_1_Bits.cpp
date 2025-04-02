class Solution {
    public:
        int hammingWeight(int n) {
           int ones=0;
           while(n!=0){
            if(1&n){
                ones++;
            }
            n=n>>1;
           } 
           return ones;
           
        }
    };