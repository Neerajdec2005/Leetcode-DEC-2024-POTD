class Solution {
public:
    int totalWays = 0;

    int findTargetSumWays(std::vector<int>& nums, int target) {
        calculateWays(nums, 0, 0, target);
        return totalWays;
    }

    void calculateWays(std::vector<int>& nums, int currentIndex, int currentSum,int target) {
        if (currentIndex == nums.size()) {
            if (currentSum == target) {
                totalWays++;
            }
        } else {
            calculateWays(nums, currentIndex + 1,
                          currentSum + nums[currentIndex], target);
            calculateWays(nums, currentIndex + 1,
                          currentSum - nums[currentIndex], target);
        }
    }
};