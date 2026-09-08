class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int curr=prices[0];
       int ans=0;
       for(int i=0;i<prices.size();i++)
       {
            if(i==prices.size()-1)
            {
                if(curr!=prices[i])
                {
                    ans+=prices[i]-curr;
                    continue;
                }
            }
            if(i+1<prices.size() && prices[i]>prices[i+1])
            {
                ans+=prices[i]-curr;
                curr=prices[i+1];
                cout<<i;" ";prices[i+1];
            }
       }
       return ans;
    }
};