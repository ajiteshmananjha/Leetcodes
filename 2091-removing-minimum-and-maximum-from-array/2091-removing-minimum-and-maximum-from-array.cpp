class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int a=INT_MAX,b=INT_MIN;
        int c,d;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>b)
            {
                b=nums[i];
                c=i;
            }
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<a)
            {
                a=nums[i];
                d=i;
            }
        }

        int mn=min(c,d);
        int mx=max(c,d);
        int n=nums.size();

        return min({mx+1, n-mn, mn+1+n-mx});
    }
};