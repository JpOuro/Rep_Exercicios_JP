/* https://leetcode.com/problems/intersection-of-two-arrays/submissions/1819549812/ */

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v_ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n = nums1.size();
        int m = nums2.size();
        for (int i = 0; i < n; i++) {
            while (i < n - 1 && nums1[i] == nums1[i + 1]) {
                i++;
            }
            int L = 0;
            int R = m - 1;
            while (L <= R) {
                int M = L + (R - L) / 2;
                if (nums2[M] == nums1[i]) {
                    v_ans.push_back(nums2[M]);
                    break;
                } 
                else if (nums2[M] < nums1[i]) {
                    L = M + 1;
                } 
                else {
                    R = M - 1;
                }
            }
        }
        return v_ans;
    }
};