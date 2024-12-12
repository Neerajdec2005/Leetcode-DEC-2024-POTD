class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long sum=0;
        for(int i=0;i<k;i++){
            sort(gifts.rbegin(),gifts.rend());
            gifts[0]=floor(sqrt(gifts[0]));
        }
        for(int i=0;i<gifts.size();i++) sum+=gifts[i];
        return sum;
    }
};