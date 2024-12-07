class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int l=1;
        int r=*max_element(nums.begin(),nums.end());
        int sol=INT_MAX;
        while(l<=r){
            int m=(l+r)/2;

            int sum=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=m){
                    sum+=ceil((nums[i]-m)/(double)m);
                }
            }if(sum<=maxOperations){
                sol=min(sol,m);
                r=m-1;
            }else l=m+1;

        }return sol;
    }
};