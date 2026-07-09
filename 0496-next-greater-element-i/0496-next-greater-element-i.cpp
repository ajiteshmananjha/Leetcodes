class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nxtgrt(nums2.size(),-1);
        vector<int> stk;
        stk.push_back(0);
        for(int i=1;i<nums2.size();i++)
        {
            if(nums2[i]>nums2[stk.back()])
            {
                while(stk.size()!=0 && nums2[i]>nums2[stk.back()])
                {
                    nxtgrt[stk.back()]=nums2[i];
                    stk.pop_back();
                }
            }
            stk.push_back(i);
        }
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            auto it = find(nums2.begin(),nums2.end(),nums1[i]);
            int id=distance(nums2.begin(),it);
            ans.push_back(nxtgrt[id]);
        }
        return ans;
    }
};