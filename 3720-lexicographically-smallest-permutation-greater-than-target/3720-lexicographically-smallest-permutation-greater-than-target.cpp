class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        vector<int> freq(26, 0);
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        for (char ch : s) {
            freq[ch - 'a']++;
        }
        vector<char> ans;
        int i=0;
        int flag=0;
        while(i<target.size())
        {
            int found=0;
            for(int j=0;j<26;j++)
            {
                if(freq[j]!=0 && j>=(target[i]-'a'))
                {
                    ans.push_back(alpha[j]);
                    if(j>(target[i]-'a'))
                        flag=1;
                    freq[j]--;
                    found=1;
                    break;
                }
            }
            if(found==0)
                break;
            if(flag==1)
                break;
            i++;
        }
        if(flag==0)
        {
            for(int p=ans.size()-1;p>=0;p--)
            {
                freq[ans[p]-'a']++;
                int x=target[p]-'a';
                for(int j=x+1;j<26;j++)
                {
                    if(freq[j]!=0)
                    {
                        ans[p]=alpha[j];
                        freq[j]--;
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                {
                    ans.resize(p+1);
                    break;
                }
            }
            if(flag==0)
                return "";
        }
        for(int k=0;k<26;k++)
        {
            while(freq[k]!=0)
            {
                ans.push_back(alpha[k]);
                freq[k]--;
            }
        }
        string ans1(ans.begin(),ans.end());
        return ans1;
    }
};