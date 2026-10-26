class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int left = 0;
        int right = m*n;
        while(left<right){
            int mid = left +(right-left)/2;
            int count = 0;
            for(int i = 1; i <= m;i++){
                count+= min(n,mid/i);
            }
            if(count>= k){
                right = mid;
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
};