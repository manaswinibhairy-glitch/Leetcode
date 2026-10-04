class Solution {
public:
    bool isPalindrome(string s) {
       
       string result;
       for(char c:s){
          if(isalnum(c)){
            result.push_back(tolower(c));
          }
       }
       int left=0;
       int right=result.size()-1;
       while(right>left){
        if(result[left]!=result[right]){
            return false;
       }
       left++;
       right--;
       
    }
    return true;
    }
};