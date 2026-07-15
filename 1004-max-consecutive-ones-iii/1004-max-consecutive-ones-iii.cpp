class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int r=0,l=0,ans=INT_MIN;
        int j=0;
        while(r<nums.size())
        {
            if(nums[r]==1)
            {
                r++;
            }
            else if(nums[r]==0 && j<k)
            {
                j++;
                r++;
            }
            else{
                ans=max(ans,r-l);
                if(nums[l]==0)
                {
                    j--;
                }
                l++;
            }
        }
        return max(ans,r-l);
    }
};