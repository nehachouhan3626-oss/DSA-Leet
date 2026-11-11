class Solution {
public:
    int findBestValue(vector<int>& arr, int target) {
        int left = 0;
        int right = *max_element(arr.begin(), arr.end());

        while (left < right) {
            int mid = left + (right - left) / 2;

            int sum = 0;

            for (int x : arr) {
                sum += min(x, mid);
            }

            if (sum < target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        int sum1 = 0;
        int sum2 = 0;

        for (int x : arr) {
            sum1 += min(x, left);
            sum2 += min(x, max(0, left - 1));
        }

        if (abs(sum1 - target) < abs(sum2 - target)) {
            return left;
        }

        return max(0, left - 1);
    }
};
