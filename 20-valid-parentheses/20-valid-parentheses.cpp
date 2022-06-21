class Solution {
public:
    bool isValid(string s) {
       stack <char> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
                if(st.size() !=0 && s[i] ==']')
                {
                    if(st.top()=='[' )
                        st.pop();
                    else
                        return false;
                }
                
                else  if(st.size() !=0 && s[i] =='}')
                {
                    if(st.top()=='{')
                        st.pop();
                    else
                        return false;
                }
             else  if(st.size() !=0 && s[i] ==')')
                {
                    if(st.top()=='(')
                        st.pop();
                    else
                        return false;
                }
            else
                st.push(s[i]);
                
            }
        if(st.empty())
            return true;
        else 
            return false;
            
        
           
    }
};