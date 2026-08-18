class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0,r=1;
        if(nums.size()==1)
            return 1;
        while(r<nums.size())
        {
            // while(nums[i]==nums[j])
            // {
            //     i++;
            // }
            // nums[++j]=nums[i];
            if(nums[l] != nums[r]){
                l++;
                nums[l] = nums[r];
            }
            r++;
        }
        return l+1;
    }
};