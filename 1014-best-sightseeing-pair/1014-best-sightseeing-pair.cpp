class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
       int m=values[0];
       int k=INT_MIN;
       for(int i=1;i<values.size();i++){
            k=max(k,m+values[i]-i);
            m=max(m,values[i]+i);
       }return k;
    }
};