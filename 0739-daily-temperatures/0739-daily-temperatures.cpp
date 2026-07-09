class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> stk;
        vector<int> ans(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++)
        {
            while(!stk.empty() && temperatures[i]>temperatures[stk.back()])
            {
                ans[stk.back()]=i;
                stk.pop_back();
            }
            stk.push_back(i);
        }
        for(int i=0;i<temperatures.size();i++)
        {
            if(ans[i]!=0)
                ans[i]=abs(ans[i]-i);
        }
        return ans;
    }
};