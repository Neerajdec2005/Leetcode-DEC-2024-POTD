class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        vector<vector<int>> v;

        for(int i=0;i<events.size();i++){
            v.push_back({events[i][0],1,events[i][2]});
            v.push_back({events[i][1]+1,-1,events[i][2]});
        }
        sort(v.begin(),v.end());

        int max_val=0;
        int max_seen=0;

        for(int i=0;i<v.size();i++){
            if(v[i][1]==1){
                max_val=max(max_val,v[i][2]+max_seen);
            }else{
                max_seen=max(max_seen,v[i][2]);
            }
        }return max_val;
    }
};