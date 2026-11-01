class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int A = 0, B = 0;

        for (int x : aliceSizes)
            A += x;

        for (int y : bobSizes)
            B += y;

        int diff = (B - A) / 2;

        unordered_set<int> bobSet(bobSizes.begin(), bobSizes.end());

        for (int x : aliceSizes) {
            int y = x + diff;

            if (bobSet.count(y)) {
                return {x, y};
            }
        }

        return {};
    }
};