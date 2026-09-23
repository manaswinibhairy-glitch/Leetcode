class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k=nums.size()-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                k=i;
                break;
            }
        }
        if(target>=nums[0]){
            int beg=0;
            int end=k;
            while(beg<=end){
                int mid=beg+(end-beg)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]<target){
                    beg=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        else{
            int beg=k+1;
            int end=nums.size()-1;
            while(beg<=end){
                int mid=beg+(end-beg)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]<target){
                    beg=mid+1;
                }
                else{
                    end=mid-1;
                }
            }

        }
        return -1;
    }
};