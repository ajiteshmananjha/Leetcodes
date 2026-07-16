class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx=INT_MIN;
        vector<int> pre;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mx=max(mx,nums[i]);
            pre.push_back(gcd(mx,nums[i]));
        }
        sort(pre.begin(),pre.end());
        long long sum=0;
        for(int i=0;i<n/2;i++)
        {
            sum+=gcd(pre[n-i-1],pre[i]);
        }
        return sum;
    }
};