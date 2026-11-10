class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for (int x : nums1) {
            int left = 0;
            int right = nums2.size() - 1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (nums2[mid] == x) {
                    return x;
                }
                else if (nums2[mid] < x) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
        }
        return -1;
    }
};
