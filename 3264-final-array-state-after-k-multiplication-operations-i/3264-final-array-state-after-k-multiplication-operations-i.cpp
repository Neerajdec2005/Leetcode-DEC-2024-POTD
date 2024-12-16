class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        ios::sync_with_stdio();
        cin.tie(0);
        while(k--){
            int d=0;
            for(int i=0;i<nums.size();i++) if(nums[i]<nums[d]) d=i;
            nums[d]*=multiplier;

        }return nums;
    }
};