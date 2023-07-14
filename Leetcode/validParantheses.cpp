class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto &c:s)  {
            if(c!=')'&&c!=']'&&c!='}') {
                st.push(c);
                continue;
            }
            if(st.empty()||(st.top()=='{'&&c!='}') ||
               (st.top()=='['&&c!=']') || 
               (st.top()=='('&&c!=')')) 
            {return 0;}
            
            st.pop();
        }
        return st.empty();
    }
};
