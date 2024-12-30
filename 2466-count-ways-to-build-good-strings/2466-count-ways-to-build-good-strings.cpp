

class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high+1);
        const int mod=1e9+7;
        dp[0]=1;
        for(int i=1;i<=high;i++){
            if(i>=zero){
                dp[i]+=dp[i-zero];
            }if(i>=one){
                dp[i]+=dp[i-one];
            }dp[i]%=mod;
        }

        int cnt=0;
        for(int i=low;i<=high;i++){
            cnt+=dp[i];
            cnt%=mod;
        }return cnt;
    }
};