class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l=0,r=0,count=0;
        int i=-1,j=-1;
        while(r<s.size())
        {
            if(s[r]=='1')
            {
                if(count==0)
                    l=r;
                count++;
                if(count==k)
                {
                    if(i == -1 || r-l < j-i || (r-l == j-i && s.substr(l, r-l+1) < s.substr(i, j-i+1)))
                    {
                        i = l;
                        j = r;
                        // cout<<count<<" "<<i<<" "<<j<<" ";
                    }
                    l++;
                    while(l<r && s[l]!='1')
                    {
                        l++;
                    }
                    count--;
                }
                // cout<<count<<" index="<<r<<" ";
                r++;
            }
            else
            {
                r++;
            }
        }
        string ans;
        if(i==-1 && j==-1)
            return ans;
        // cout<<i<<" "<<j<<" "<<s.substr(i,j);
        return s.substr(i,j-i+1);
    }
};