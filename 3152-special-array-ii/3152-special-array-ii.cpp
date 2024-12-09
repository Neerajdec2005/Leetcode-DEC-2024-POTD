class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        
        vector<bool> v;

        vector<int> h;
        h.push_back(1);
        int x=2;
        for(int i=1;i<nums.size();i++){
            if((nums[i]&1)!=(nums[i-1]&1)){
                h.push_back(x);
                x++;
            }else{
                h.push_back(1);
                x=2;
            }
        }for(int i=0;i<h.size();i++) cout<<h[i]<<" ";
        for(int i=0;i<queries.size();i++){
            if(h[queries[i][1]]>=(queries[i][1]-queries[i][0])+1){
                v.push_back(1);
            }else v.push_back(0);
        }return v;

    }
};