class Solution {
public:
    string removeKdigits(string num, int k) {

        vector<char> stk;
        int j = 0;

        for(int i = 0; i < num.size(); i++)
        {
            while(!stk.empty() && num[i] < stk.back() && j < k)
            {
                stk.pop_back();
                j++;
            }
            stk.push_back(num[i]);
        }

        while(j < k)
        {
            stk.pop_back();
            j++;
        }

        auto it = stk.begin();

        while(it != stk.end() && *it == '0')
            it++;

        if(it == stk.end())
            return "0";

        return string(it, stk.end());
    }
};