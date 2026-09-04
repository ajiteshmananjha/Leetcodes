class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans=-1;
        int n=nums.size();
        int mx=INT_MIN,mn=INT_MAX;
        vector<int> max;
        vector<int> man(n,0);
        for(int i=0;i<nums.size();i++)
        {
            if(mx<nums[i])
            {
                mx=nums[i];
            }
            max.push_back(mx);
            if(mn>nums[n-i-1])
            {
                mn=nums[n-i-1];
            }
            man[n-i-1]=mn;
        }
        for(int i=0;i<n;i++)
        {
            if(max[i]-man[i]<=k)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};