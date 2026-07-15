class Solution {
public:
    int gcd(int a, int b) {
        if (a == 0)
            return b;
        if (b == 0)
            return a;
        if (a == b)
            return a;
        if (a > b)
            return gcd(a - b, b);

        return gcd(a, b - a);
    }
    int gcdOfOddEvenSums(int n) {
        int od=1,sumod=0;
        int eve=2,sumeve=0;
        int i=0;
        while(i<n)
        {
            sumod+=od;
            sumeve+=eve;
            eve+=2;
            od+=2;
            i++;
        }
        return gcd(sumeve,sumod);
    }
};