class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long sum=0;
        int l=0;
        int rm=INT_MAX;
        int lm=INT_MIN;
        int r;
        for(r=0;r<nums.size();r++){
            rm=min(rm,nums[r]);
            lm=max(lm,nums[r]);
            if(lm-rm>2){
                long long k=r-l;
                sum+=((k*(k+1))/2);
                l=r;
                rm=nums[r];
                lm=nums[r];
                while(abs(nums[r]-nums[l-1])<=2){
                    l--;
                    rm=min(rm,nums[l]);
                    lm=max(lm,nums[l]);
                }if(l<r){
                    long long k=r-l;
                    sum-=((k*(k+1))/2);
                }
            }
        }
        long long k=r-l;
        sum+=((k*(k+1))/2);
        return sum;
    }
};