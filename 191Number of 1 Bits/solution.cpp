class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        for(int i=0;i<sizeof(n)*8;i++){
            if(n&1) ++ans;
            n>>=1;
        }
        return ans;
    }
};