/* https://leetcode.com/problems/merge-sorted-array/submissions/1805065888/ */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0;
        int i = 0;
        nums1.erase(nums1.begin() + m, nums1.end());
        if (n > 0) {
            while (i < nums1.size() && nums2.size() > 0) {
                if (nums1[i] > nums2[0]) {
                    nums1.insert(nums1.begin() + i, nums2[0]);
                    nums2.erase(nums2.begin());
                }
                i++;
            }
            nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        }
    }
};