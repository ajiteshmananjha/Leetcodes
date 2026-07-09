class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mp;
        vector<int> stk;

        for(int i = 0; i < nums2.size(); i++)
        {
            while(!stk.empty() && nums2[i] > nums2[stk.back()])
            {
                mp[nums2[stk.back()]] = nums2[i];
                stk.pop_back();
            }

            stk.push_back(i);
        }
        while(!stk.empty())
        {
            mp[nums2[stk.back()]] = -1;
            stk.pop_back();
        }

        vector<int> ans;

        for(int x : nums1)
        {
            ans.push_back(mp[x]);
        }

        return ans;
    }
};