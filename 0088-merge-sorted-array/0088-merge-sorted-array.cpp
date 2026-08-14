class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n < 1)
            return;

        int l = m - 1, r = m + n - 1;
        int s = n - 1;

        while (s >= 0) {
            if (l < 0) {
                nums1[r] = nums2[s];
                s--;
                r--;
                continue;
            }

            if (nums2[s] > nums1[l]) {
                nums1[r] = nums2[s];
                s--;
                r--;
            }
            else {
                nums1[r] = nums1[l];
                l--;
                r--;
            }
        }
    }
};