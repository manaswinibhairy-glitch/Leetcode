class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProductSoFar=nums[0];
        int minProductSoFar=nums[0];
        int result=nums[0];
        for(int i=1;i<nums.size();i++){
            int current=nums[i];
            int tempMax=max({current,maxProductSoFar*current,minProductSoFar*current});
            minProductSoFar=min({current,maxProductSoFar*current,minProductSoFar*current});
            maxProductSoFar=tempMax;
            result=max(result,maxProductSoFar);
        
        }
        return result;
    }
};
