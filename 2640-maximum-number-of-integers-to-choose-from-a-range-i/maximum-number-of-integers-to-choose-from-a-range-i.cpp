static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int,int> m;
        for(int i=0;i<banned.size();i++){
            m[banned[i]]++;
        }

        long long sum=0;
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(m[i]==0 && sum+i<=maxSum){
                cnt++;
                sum+=i;
            }if(sum+i>maxSum) break;
        }return cnt;
    }
};