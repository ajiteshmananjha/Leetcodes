class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int> cnt(26,0);
        int ans=0;
        int l=0,r=0;
        do
        {
            if(cnt[s[r]-'a']<2)
            {
                cnt[s[r]-'a']++;
                r++;
                continue;
            }
            else{
                ans=max(ans,r-l);
                while(l<s.size() && s[l]!=s[r])
                {
                    cnt[s[l]-'a']--;
                    l++;
                }
                l++;
                r++;
            }
        }while(r<s.size());
        ans=max(ans,r-l);
        return ans;
    }
};