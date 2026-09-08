class Solution {
public:
    int jump(vector<int>& nums) {
        int ans = 0;
        int i = 0;
        int n = nums.size();

        if(n == 1)
            return 0;

        while(i < n) {
            if(i + nums[i] >= n - 1) {
                ans++;
                break;
            }

            int mx = -1;
            int tojmp = i;

            for(int j = i + 1; j <= i + nums[i]; j++) {
                if(mx < j + nums[j]) {
                    mx = j + nums[j];
                    tojmp = j;
                }
            }

            ans++;
            i = tojmp;
        }

        return ans;
    }
};