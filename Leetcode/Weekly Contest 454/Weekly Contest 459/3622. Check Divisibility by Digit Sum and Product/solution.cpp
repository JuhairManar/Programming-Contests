// link - https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/

class Solution {
public:
    bool checkDivisibility(int n) {
        int sv=0,sp=1,t=n,r;
        while(n){
            r=n%10;
            sv+=r;
            sp*=r;
            n/=10;
        }
        // cout<<sv<<" "<<sp<<endl;
        if(t%(sp+sv)==0) return 1;
        return 0;
    }
};
