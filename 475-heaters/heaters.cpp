class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(),heaters.end());

        int radius =0;
        for(int house:houses){
            int left = 0;
            int right = heaters.size()-1;
            while(left <= right){
                int mid = left +(right-left)/2;
                if(heaters[mid]<house){
                    left = mid +1;
                }
                else{
                    right = mid-1;
                }
            }
            int distRight= INT_MAX;
            int distLeft = INT_MAX;
            if(left<heaters.size()){
                distRight = heaters[left]-house;
            }
            if(right>=0){
                distLeft = house -heaters[right];
            }
            int nearest = min(distLeft,distRight);
            radius = max(radius,nearest);
        }
        return radius;
        
    }
};