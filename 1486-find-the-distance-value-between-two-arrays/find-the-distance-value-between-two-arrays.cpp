
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());

        int count = 0;

        for (int x : arr1) {
            int left = 0;
            int right = arr2.size() - 1;
            int found = -1;

            while (left <= right) {
                int mid = left + (right - left) / 2;

                if (arr2[mid] >= x - d) {
                    found = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }

            if (found == -1 || arr2[found] > x + d) {
                count++;
            }
        }

        return count;
    }
};
