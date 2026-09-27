class Solution {
public:
    int CountPartitions(vector<int>& nums,int maxSum){
        int partitions=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=maxSum){
                sum+=nums[i];
            }
            else{
                partitions++;
                sum=nums[i];
            }
        }
        return partitions;
    }
    int splitArray(vector<int>& nums, int k) {
       int low=*max_element(nums.begin(),nums.end());
       int high=0;
       for(int num:nums){
        high+=num;
       }
       while(low<=high){
        int mid=low+(high-low)/2;
        int partitions=CountPartitions(nums,mid);
        if(partitions>k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
       }
       return low;
    }
};