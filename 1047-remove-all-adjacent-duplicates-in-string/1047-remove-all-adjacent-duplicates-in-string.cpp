class Solution {
public:
    string removeDuplicates(string s) {
        vector<char> stk;
        for(int i=0;i<s.size();i++)
        {
            if(stk.empty() || stk.back()!=s[i])
            {
                stk.push_back(s[i]);
            }
            else
            {
                stk.pop_back();
            }
        }
        string ans(stk.begin(),stk.end());
        return ans;
    }
};