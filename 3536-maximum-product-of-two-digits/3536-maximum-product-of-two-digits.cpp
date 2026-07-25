class Solution {
public:
    int maxProduct(int n) {
        int a=n;
        int max1=a%10;
        a=a/10;
        int max2=a%10;
        a=a/10;
        if(max2>max1)
        {
            int temp=max1;
            max1=max2;
            max2=temp;
        }
        while(a!=0)
        {
            int b=a%10;
            if(b>=max1)
            {
                max2=max1;
                max1=b;
            }
            else if(b>max2)
            {
                max2=b;
            }
            a=a/10;
        }
        return max1*max2;
    }
};