class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        unordered_set<int> same;

        for(int i = 0; i < fronts.size(); i++) {
            if(fronts[i] == backs[i]) {
                same.insert(fronts[i]);
            }
        }

        int ans = INT_MAX;

        for(int x : fronts) {
            if(same.find(x) == same.end()) {
                ans = min(ans, x);
            }
        }

        for(int x : backs) {
            if(same.find(x) == same.end()) {
                ans = min(ans, x);
            }
        }

        return ans == INT_MAX ? 0 : ans;
    }
};