class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score=0;
        vector<vector<int>> v;
        vector<int> vis(nums.size());
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }

        sort(v.begin(),v.end());
        vector<int> v1(nums.size(),1);
        int i=0;
        while(vis!=v1){
            if(vis[v[i][1]]==0){
                score+=v[i][0];
                vis[v[i][1]]=1;
                if(v[i][1]!=0) vis[v[i][1]-1]=1;
                if(v[i][1]!=nums.size()-1) vis[v[i][1]+1]=1;

            }i++;
        }return score;
    }
};