class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int curr=nums[0];
        int i=1;
        int count=1;
        while(i<nums.size())
        {
            if(nums[i]==curr)
            {
                count++;
            }
            else if(nums[i]!=curr && count<1)
            {
                curr=nums[i];
                count=1;
            }
            else{
                count--;
            }
            i++;
        }
        return curr;
    }
};