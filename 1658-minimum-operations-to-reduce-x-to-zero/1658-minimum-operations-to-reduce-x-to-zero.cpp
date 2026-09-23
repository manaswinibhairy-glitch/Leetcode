class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int left=0;
        int right=0;
        int target=0;
        int totalSum=0;
        int sum=0;
        int ans=0;
        int maxLen=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            totalSum=totalSum+nums[i];
        }
        target=totalSum-x;
        if(target<0){
            return -1;
        }
        for(right=0;right<n;right++){
            sum+=nums[right];
            while(left<=right && sum>target){
                sum-=nums[left];
                left++;
                if(sum==target){
                    break;
                }
            }
            if(sum==target){
                maxLen=max(maxLen,right-left+1);
            }
        }
        return(maxLen==-1)? -1: n-maxLen;
    }

};