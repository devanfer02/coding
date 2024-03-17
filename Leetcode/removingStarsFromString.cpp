class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        
        for(auto c : s) {
            if(c != '*') {
                st.push(c);
                continue;
            }
            
            if(!st.empty()) st.pop();
        }
        string res = "";
        while(!st.empty()) {
            res += st.top(); st.pop();
        }
        string tmp = "";
        for(int i = res.size() - 1; i >= 0; i--) {
            tmp += res[i];
        }
        
        return tmp;
        
    }
};