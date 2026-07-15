class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> cnt(26,0);
        for(int i=0;i<s.size();i++)
        {
            cnt[s[i]-'a']++;
        }
        int k=0;
        while(k<s.size())
        {
            if(cnt[s[k]-'a']==1)
            {
                return k;
                break;
            }
            k++;
        }
        return -1;
    }
};