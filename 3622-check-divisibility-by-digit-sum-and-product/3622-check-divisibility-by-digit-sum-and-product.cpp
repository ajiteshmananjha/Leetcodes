class Solution {
public:
    bool checkDivisibility(int n) {
        int a=0,b=1;
        int c=n;
        while(c!=0){
            a+=c%10;
            b*=c%10;
            c/=10;
        }
        return n%(a+b)==0 ? true:false;
    }
};