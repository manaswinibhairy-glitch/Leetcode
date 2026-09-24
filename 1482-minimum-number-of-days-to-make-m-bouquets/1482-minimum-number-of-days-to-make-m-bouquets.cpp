class Solution {
public:
    int canMake(vector<int>& bloomDay,int day,int k){
        int bloom=0;
        int flowers=0;
        int bouquets=0;
        for(int bloom:bloomDay){
            if(bloom<=day){
                flowers++;
            }
            else{
                bouquets+=(flowers/k);
                flowers=0;
            }
        }
        bouquets+=flowers/k;
        return bouquets;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        long long totalFlowers = (long long)m * k;
        if (totalFlowers > bloomDay.size()) return -1; 
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canMake(bloomDay,mid,k)>=m){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;



        }
        
    };