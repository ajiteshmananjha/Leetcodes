class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0, r = nums.size() - 1;
        int count = 0;

        while (r >= 0 && nums[r] == val) {
            r--;
            count++;
        }

        while (l <= r) {
            if (nums[l] == val) {
                swap(nums[l], nums[r]);
                
                while (r >= 0 && nums[r] == val) {
                    r--;
                    count++;
                }
            }
            else {
                l++;
            }
        }

        return nums.size() - count;
    }
};