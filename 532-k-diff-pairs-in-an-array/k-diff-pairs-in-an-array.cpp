class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int ans = 0;

        for(int x : nums) {
            mp[x]++;
        }

        for(auto it : mp) {
            int x = it.first;

            if(k == 0) {
                if(mp[x] > 1) {
                    ans++;
                }
            }
            else {
                if(mp.find(x + k) != mp.end()) {
                    ans++;
                }
            }
        }

        return ans;
    }
};