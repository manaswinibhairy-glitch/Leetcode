class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
        stack<string> st;
        while(i<n){
            while(i<n && s[i]==' '){
                i++;
            }
            string word="";
            while(i<n && s[i]!=' '){
                word+=s[i];
                i++;
            }
            if(!word.empty()){
                st.push(word);
            }
        }
            string ans="";
            while(!st.empty()){
                ans+=st.top();
                st.pop();
            
            if(!st.empty()){
                ans+=" ";
            }
            }
            return ans;

        }
    };
