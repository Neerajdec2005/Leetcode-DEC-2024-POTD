class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=0;
        int cnt=0;
        while(i<nums.size() && j<nums.size()){
            if(nums[j]-nums[i]<=2*k) j++;
            else{
                cnt=max(cnt,j-i);
                i++;
            }
        }
        cnt=max(cnt,j-i);
        return cnt;
    }
};