// week 4 XPSC Club
//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

class Solution {
  public:
    int maximumSumSubarray(vector<int>& a, int k) {
        int n = a.size() , l = 0 , r = 0 ;
        long long ans = 0 , sum = 0 ;
        while(r<n){
            sum+=a[r];
            if(r - l + 1 == k){
                ans = max(ans,sum);
                sum -= a[l];
                l++,r++ ;
            }
            else{
                r++;
            }
        }
        return ans ;
    }
};
