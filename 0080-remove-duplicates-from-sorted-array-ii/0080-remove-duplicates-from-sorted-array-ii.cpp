class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0;
        int r = 0;
        // while(r < nums.size()){
        //     if(nums[l] == nums[r] && count <= 2){
        //         l++;
        //         count++;
        //     }
        //     else if(nums[l] == nums[r] && count > 2)
        //     {
        //         count++;
        //     }
        //     else{
        //         l++;
        //         nums[l]=nums[r];
        //     }
        //     r++;
        // }
        int currentNum = nums[0];
        int count = 0;
        while(r < nums.size()){
            if(nums[r] == currentNum) count++;
            else{
                currentNum = nums[r];
                count = 1;
            }
            if(count <= 2){
                nums[l] = nums[r];
                l++;
                r++;
            }
            else{
                r++;
            }
        }
        cout << l;
        return l;
    }
};