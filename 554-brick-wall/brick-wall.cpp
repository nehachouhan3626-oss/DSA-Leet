class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<long long, int> mp;
        int maxGaps = 0;

        for(int i = 0; i < wall.size(); i++) {
            long long sum = 0;

            for(int j = 0; j < wall[i].size() - 1; j++) {
                sum += wall[i][j];
                mp[sum]++;
                maxGaps = max(maxGaps, mp[sum]);
            }
        }

        return wall.size() - maxGaps;
    }
};