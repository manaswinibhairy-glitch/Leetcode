class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
        else if(n<100000){
           int k=n-999;
           return k;
        }
        else{
            return n-999;
        }
        return 0;
    }
};