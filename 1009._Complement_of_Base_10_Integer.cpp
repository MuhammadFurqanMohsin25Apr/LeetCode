class Solution {
public:
    int bitwiseComplement(int n) {
        int m=n;
        int mask=0;
        if(n==0){
            return 1;
        }
        int answer;
        while(m!=0){
            mask=(mask<<1)|1;
            m=m>>1;
        }
        answer=(~n)&mask;
        return answer;
    }
};
