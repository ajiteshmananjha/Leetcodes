class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        vector<int> cnt(10,0);

        for(int i=0;i<n;i++)
            cnt[digits[i]]++;

        int ans=0;

        for(int i=0;i<10;i++)
        {
            if(i%2!=0 || cnt[i]==0)
                continue;

            cnt[i]--;

            for(int j=1;j<10;j++)
            {
                if(cnt[j]==0)
                    continue;

                cnt[j]--;

                for(int k=0;k<10;k++)
                {
                    if(cnt[k]>0)
                        ans++;
                }

                cnt[j]++;
            }

            cnt[i]++;
        }

        return ans;
    }
};