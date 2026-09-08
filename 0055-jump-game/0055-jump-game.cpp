class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0;

        while(i<nums.size())
        {
            if(i+nums[i]>=nums.size()-1)
                return true;

            if(nums[i]==0)
                return false;

            int mx=i;
            int next=i;

            for(int j=i+1;j<=i+nums[i] && j<nums.size();j++)
            {
                if(j+nums[j]>mx)
                {
                    mx=j+nums[j];
                    next=j;
                }
            }

            if(next==i)
                return false;

            i=next;
        }

        return true;
    }
};