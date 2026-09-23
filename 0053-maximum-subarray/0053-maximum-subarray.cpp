class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum=nums[0];
        int largestsum=nums[0];
        for(int i=1;i<nums.size();i++){
            currentsum=max(nums[i],currentsum+nums[i]);
            largestsum=max(largestsum,currentsum);
        }
        return largestsum;
    }
};
