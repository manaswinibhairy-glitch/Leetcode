class Solution {
public:
    int Days(vector<int>& weights,int k){
        int cnt=1;
        int sum=0;
        for(int weight:weights){
            if(sum+weight>k){
                cnt++;
                sum=0;
            }
            sum+=weight;
        }
        return cnt;
    }
     int sum(vector<int>& weights){
            int sum=0;
            for(int weight:weights){
            sum+=weight;
        }
        return sum;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        
    int high=sum(weights);
    while(low<=high){
        int mid=low+(high-low)/2;
        if(Days(weights,mid)<=days){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
    }
};