class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> v;

        for(int i=0;i<prices.size();i++){
            int x=0;
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    x=1;
                    v.push_back(prices[i]-prices[j]);
                    break;
                }
            }if(x==0) v.push_back(prices[i]);
        }return v;
    }
};