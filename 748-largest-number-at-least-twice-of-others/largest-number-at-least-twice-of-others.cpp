
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = INT_MIN;
        int second = INT_MIN;
        int index = -1;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] > maxi) {
                second = maxi;
                maxi = nums[i];
                index = i;
            }
            else if (nums[i] > second) {
                second = nums[i];
            }
        }

        if (maxi >= 2 * second) {
            return index;
        }

        return -1;
    }
};
