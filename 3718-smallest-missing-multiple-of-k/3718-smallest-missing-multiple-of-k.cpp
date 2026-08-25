class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int a=*max_element(nums.begin(),nums.end());
        vector<int> s(a+1,0);
        for(int i=0;i<nums.size();i++)
        {
            s[nums[i]]=1;
        }
        int t=1;
        int flag=0;
        while(k*t<=a)
        {
            if(s[k*t] == 0)
            {
                flag=1;
                break;
            }
            else
            {
                t++;
            }
        }
        if(flag=1)
            return k*t;
        return k*(t+1);
    }
};