class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s(candyType.begin(), candyType.end());
        int maxm = candyType.size()/2;
        int count = s.size();
        
        return min(maxm,count);
    }
};