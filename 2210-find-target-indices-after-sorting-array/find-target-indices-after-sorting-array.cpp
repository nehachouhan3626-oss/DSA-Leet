
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int n = nums.size();

        int left = 0, right = n;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        int first = left;

        left = 0;
        right = n;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        int last = left;

        for (int i = first; i < last; i++) {
            ans.push_back(i);
        }

        return ans;
    }
};
